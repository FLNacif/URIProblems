package main

import (
	"fmt"
	"math"
)

func main() {

	var quantidade, linhas float64

	fmt.Scanf("%f\n", &quantidade)

	for i := 0.0; i < quantidade; i++ {
		fmt.Scanf("%f\n", &linhas)
		soma := 0.0
		for j := 0.0; j < linhas; j++ {
			soma = soma + math.Pow(2, j)
		}
		fmt.Printf("%.0f\n", soma)
	}
}
