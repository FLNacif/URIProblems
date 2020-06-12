package main

import (
	"fmt"
)

func main() {

	var p, r int
	fmt.Scanf("%d %d", &p, &r)

	if p == 1 && r == 1 {
		fmt.Println("A")
	} else if p == 1 && r == 0 {
		fmt.Println("B")
	} else if p == 0 {
		fmt.Println("C")
	}
}
