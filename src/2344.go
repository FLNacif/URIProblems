package main

import (
	"fmt"
)

func main() {

	var nota int

	fmt.Scanf("%d", &nota)

	if nota == 0 {
		fmt.Println("E")
	} else if nota <= 35 {
		fmt.Println("D")
	} else if nota <= 60 {
		fmt.Println("C")
	} else if nota <= 85 {
		fmt.Println("B")
	} else {
		fmt.Println("A")
	}

}
