package main

import (
	"fmt"
)

func main() {

	var bandejas, copos, latas, copos_quebrados int

	fmt.Scanf("%d\n", &bandejas)

	for i := 0; i < bandejas; i++ {
		fmt.Scanf("%d %d\n", &latas, &copos)
		if latas > copos {
			copos_quebrados += copos
		}
	}
	fmt.Println(copos_quebrados)
}
