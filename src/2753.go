package main

import (
	"fmt"
)

func main() {

	vetor := []int{97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122}

	for i := 0; i < len(vetor); i++ {
		fmt.Printf("%d e %s\n", vetor[i], string(vetor[i]))
	}

}
