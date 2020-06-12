package main
 
import (
    "fmt"
)
 
func main() {

	var p1,c1,p2,c2 int
	
	fmt.Scanf("%d %d %d %d",&p1, &c1, &p2, &c2)

	if p1*c1 == p2*c2 {
		fmt.Println(0)
	}else if p1*c1 > p2*c2 {
		fmt.Println(-1)
	}else {
		fmt.Println(1)
	}
}
