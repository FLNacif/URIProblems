package main

import (
	"fmt"
)

const maxValue = 10000000

type Pair struct {
	Index    int
	Distance int
}

func (p *Pair) String() string {
	return fmt.Sprintf("Index=%d Distance=%d", p.Index, p.Distance)
}

func main() {
	var cities, roads int
	fmt.Scanf("%d %d\n", &cities, &roads)
	for cities != 0 || roads != 0 {
		graph := make([][]int, cities)
		for i := range graph {
			graph[i] = make([]int, cities)
			for j := range graph[i] {
				graph[i][j] = maxValue
			}
		}

		for i := 0; i < roads; i++ {
			var from, to, hours int
			fmt.Scanf("%d %d %d\n", &from, &to, &hours)
			from = from - 1
			to = to - 1
			if graph[to][from] != maxValue {
				graph[from][to] = 0
				graph[to][from] = 0
			} else {
				graph[from][to] = hours
			}
		}

		var queries int
		alreadyComputed := make([]bool, cities)
		fmt.Scanf("%d\n", &queries)
		for i := 0; i < queries; i++ {
			var from, to int
			fmt.Scanf("%d %d\n", &from, &to)
			from = from - 1
			to = to - 1
			var distance int
			if !alreadyComputed[from] {
				distance = dijkstra(from, to, &graph)
				alreadyComputed[from] = true
			} else {
				distance = graph[from][to]
			}
			if distance >= maxValue {
				fmt.Println("Nao e possivel entregar a carta")
			} else {
				fmt.Printf("%d\n", distance)
			}
		}
		fmt.Println()
		fmt.Scanf("%d %d\n", &cities, &roads)
	}
}

func smallDistanceFromQueue(pq *[]*Pair) *Pair {
	pair := (*pq)[0]

	(*pq) = (*pq)[1:len((*pq))]

	return pair
}

func pushSorted(pq *[]*Pair, p *Pair) {
	var i, j = 0, len(*pq) - 1
	for i <= j {
		center := (i + j) >> 1
		if (*pq)[center].Distance < p.Distance {
			i = center + 1
		} else if (*pq)[center].Distance > p.Distance {
			j = center - 1
		} else {
			i = center + 1
			j = center
		}
	}

	if len((*pq)) == i {
		(*pq) = append((*pq), p)
	} else {
		(*pq) = append((*pq)[:i+1], (*pq)[i:]...)
		(*pq)[i] = p
	}
}

func dijkstra(from int, to int, graph *[][]int) int {
	var distances = make([]int, len(*graph))
	var visited = make([]bool, len(*graph))
	var priorityQueue = make([]*Pair, 0)

	for i := range distances {
		visited[i] = false
		distances[i] = maxValue
	}

	distances[from] = 0

	pushSorted(&priorityQueue, &Pair{from, distances[from]})

	for len(priorityQueue) > 0 {
		// fmt.Printf("PQ Before%+v\n", priorityQueue)
		closest := smallDistanceFromQueue(&priorityQueue)
		// fmt.Printf("PQ After%+v\n", priorityQueue)

		closestIndex := closest.Index
		// fmt.Printf("Closest %+v\n", closest)
		if !visited[closestIndex] {
			visited[closestIndex] = true

			for i := 0; i < len(*graph); i++ {
				dist := (*graph)[closestIndex][i]

				if distances[i] > (distances[closestIndex] + dist) {
					// fmt.Printf("Because %d > %d\n", distances[i], (distances[closestIndex] + dist))

					distances[i] = distances[closestIndex] + dist

					toAppend := &Pair{i, distances[i]}
					// fmt.Printf("To append %+v\n", toAppend)
					pushSorted(&priorityQueue, toAppend)
				}
			}
		}
		// time.Sleep((time.Second))
	}
	(*graph)[from] = distances
	return distances[to]
}
