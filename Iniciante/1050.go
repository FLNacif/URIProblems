package main
 
import (
    "fmt"
)
 
func main() {


	var ddd int
	var result string

	fmt.Scanf("%d",&ddd);

	switch ddd{
	case 61:
		result = "Brasilia"
	case 71:
		result = "Salvador"
	case 11:
		result = "Sao Paulo"
	case 21:
		result = "Rio de Janeiro"
	case 32:
		result = "Juiz de Fora"
	case 19:
		result = "Campinas"
	case 27:
		result = "Vitoria"
	case 31:
		result = "Belo Horizonte"
	default:
		result = "DDD nao cadastrado"
	}

	fmt.Println(result)

}