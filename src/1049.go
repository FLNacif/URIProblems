package main
 
import (
    "fmt"
)
 
func main() {

	var palavras = make(map[string]int)

	var read string;

	fmt.Scanf("%s\n", &read )
	palavras[read] = 0
	fmt.Scanf("%s\n", &read )
	palavras[read] = 0
	fmt.Scanf("%s\n", &read )
	palavras[read] = 0

	_, vertebrado := palavras["vertebrado"]
	_, invertebrado := palavras["invertebrado"]
	_, ave := palavras["ave"]
	_, mamifero := palavras["mamifero"]
	_, inseto := palavras["inseto"]
	_, anelideo := palavras["anelideo"]
	_, carnivoro := palavras["carnivoro"]
	_, onivoro := palavras["onivoro"]
	_, herbivoro := palavras["herbivoro"]
	_, hematofago := palavras["hematofago"]

	if vertebrado {
		if ave{
			if carnivoro{
				fmt.Println("aguia")
				return
			}
			if onivoro{
				fmt.Println("pomba")
				return
			}
		}
		if mamifero{
			if onivoro{
				fmt.Println("homem")
				return
			}
			if herbivoro{
				fmt.Println("vaca")
				return
			}
		}
	}
	if invertebrado{
		if inseto{
			if hematofago{
				fmt.Println("pulga")
				return
			}
			if herbivoro{
				fmt.Println("lagarta")
				return
			}
		}
		if anelideo{
			if hematofago{
				fmt.Println("sanguessuga")
				return
			}
			if onivoro{
				fmt.Println("minhoca")
				return
			}
		}
	}

}
