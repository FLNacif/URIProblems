package main

import (
	"fmt"
)

func main() {

	var quantidade, porta, uns int
	fmt.Scanf("%d\n", &quantidade)
	for i := 0; i < quantidade; i++ {
		fmt.Scanf("%d\n", &porta)
		if porta == 1 {
			uns++
		}
	}
	fmt.Println(quantidade - uns)
}
