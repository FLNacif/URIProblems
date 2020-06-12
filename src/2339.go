package main

import (
	"fmt"
)

func main() {

	var c, p, f int

	fmt.Scanf("%d %d %d\n", &c, &p, &f)

	if (c * f) <= p {
		fmt.Println("S")
	} else {
		fmt.Println("N")
	}

}
