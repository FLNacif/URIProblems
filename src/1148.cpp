#include <iostream>
#include <vector>

using namespace std;

const int MAX_VALUE = 10000000;
typedef vector<vector<int>> Matrix;
typedef vector<int> Row;

pair<int, int> getClosestAdjFromQueue(vector<pair<int,int>> *pq) {
	pair<int, int> pair = (*pq)[0];
	pq->erase(pq->begin());
	
	return pair;
}

void printRow(Row row) {
	for (int i = 0; i < row.size(); i++)
	{
		cout << row[i] << " ";
	}
}

void printMatrix(Matrix m) {
	for (int i = 0; i < m.size(); i++)
	{
		printRow(m[i]);
		printf("\n");
	}
}

void printPair(pair<int, int> p) {
	printf(" (%d,%d) ", p.first, p.second);
}

void printPQ(vector<pair<int,int>> pq) {
	printf("[");
	for (int i = 0; i < pq.size(); i++)
	{
		printPair(pq[i]);
	}
	printf("]\n");
}

void pushSorted(vector<pair<int,int>> *pq, pair<int,int> p ) {
	int i = 0;
	int j = (*pq).size() - 1;
	int center = 0;
	while (i <= j) {
		center = (i + j) >> 1;
		if((*pq)[center].second < p.second) {
			i = center + 1;
		} else if ( (*pq)[center].second > p.second) {
			j = center - 1;
		} else {
			i = center + 1;
			j = center;
		}
	}
	pq->insert(pq->begin() + i, p);
}

int djikstra(int from, int to, Matrix *graph) {
	int length = (*graph).size();
	Row distances(length);
	Row visited(length);
	vector<pair<int,int>> priorityQueue;

	for (int i = 0; i < length; i++)
	{
		visited[i] = false;
		distances[i] = MAX_VALUE;
	}

	distances[from] = 0;
	pushSorted(&priorityQueue, make_pair(from, distances[from]));
	while (priorityQueue.size() > 0) {
		pair<int, int> closest = getClosestAdjFromQueue(&priorityQueue);
		int closestIndex = closest.first;

		if (visited[closestIndex] == 0)
		{
			visited[closestIndex] = 1;

			for (int i = 0; i < length; i++)
			{
				int dist = (*graph)[closestIndex][i];

				if (distances[i] > (distances[closestIndex] + dist)) {
					distances[i] = distances[closestIndex] + dist;
					pair<int, int> toAppend = make_pair(i, distances[i]);
					pushSorted(&priorityQueue, toAppend);
				}
			}
		}
	}
	(*graph)[from] = distances;
	return distances[to];
}

int main()
{

	int cities, roads;
	scanf("%d", &cities);
	scanf("%d", &roads);
	while (cities != 0 || roads != 0)
	{
		Matrix graph;
		for (int i = 0; i < cities; i++)
		{
			Row adj(cities);
			for (int j = 0; j < cities; j++)
			{
				adj[j] = MAX_VALUE;
			}
			graph.push_back(adj);
		}

		for (int i = 0; i < roads; i++) {
			int from, to, hours;
			scanf("%d", &from);
			scanf("%d", &to);
			scanf("%d", &hours);
			from = from - 1;
			to = to - 1;
			if (graph[to][from] != MAX_VALUE) {
				graph[from][to] = 0;
				graph[to][from] = 0;
			} else {
				graph[from][to] = hours;
			}
		}
		int queries;
		scanf("%d", &queries);

		for(int i = 0; i < queries; i++) {
			int from, to, distance;
			scanf("%d", &from);
			scanf("%d", &to);
			from = from - 1;
			to = to - 1;

			distance = djikstra(from, to, &graph);
			if(distance >= MAX_VALUE) {
				printf("Nao e possivel entregar a carta\n");
			} else {
				printf("%d\n", distance);
			}
		}
		printf("\n");
		scanf("%d", &cities);
		scanf("%d", &roads);
	}

	return 0;
}
