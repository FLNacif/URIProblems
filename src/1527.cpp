#include <stdio.h>
 
using namespace std;
 
int main() {
 
    int n, m, tipo, j1, j2, vit;
        scanf("%d %d",&n,&m);
        int i;
        while (n != 0 && m != 0) {
            vit = 0;
            int guild [n+1][2];
            for (i = 1; i <= n; i++) {
                scanf("%d",&guild[i][0]);
                guild[i][1] = i;
            }
 
            for (i = 0; i < m; i++) {
 
                scanf("%d %d %d",&tipo,&j1,&j2);
                int aux = j1;
                while(guild[aux][1]!= aux){
                    aux = guild[aux][1];
                }
                guild[j1][1] = aux;
                j1 = aux;
                aux=j2;
                while(guild[aux][1]!=aux){
                    aux = guild[aux][1];
                }
                guild[j2][1] = aux;
                j2 = aux;
                if (tipo == 1) {
                    guild[j1][0] += guild[j2][0];
                    if(guild[1][1] == guild[j2][1])
                        guild[1][1] = guild[j1][1];
                    guild[j2][1] = guild[j1][1];
 
                } else {
                    if(guild[1][1] == guild[j1][1] && guild[j1][0]>guild[j2][0])
                        vit++;
                    else if(guild[1][1] == guild[j2][1] && guild[j2][0]>guild[j1][0])
                        vit++;
                }
            }
            printf("%d\n",vit);
            scanf("%d %d",&n,&m);
        }
        //long e = System.currentTimeMillis();
        //System.out.println((e-b)+"ms");
        return 0;
}