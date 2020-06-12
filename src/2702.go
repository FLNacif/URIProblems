package main

import (
	"fmt"
)

func main() {

	var r1, r2, r3, q1, q2, q3, falta int

	fmt.Scanf("%d %d %d\n", &q1, &q2, &q3)
	fmt.Scanf("%d %d %d", &r1, &r2, &r3)

	if r1 > q1 {
		falta = falta + (r1 - q1)
	}
	if r2 > q2 {
		falta = falta + (r2 - q2)
	}
	if r3 > q3 {
		falta = falta + (r3 - q3)
	}

	fmt.Println(falta)
}
