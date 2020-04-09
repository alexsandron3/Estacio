//Atenção, todos exercícios estão no final do arquivo, antes disso são apenas estruturas para o menu que eu fiz para mim!
//Dê CTRL + F e procure por "Exercicio1, Exercicio2, Exercicio3, Exercicio4, Exercicio5..." São os respectivos números dos exercícios
//Comando "printf("\033[2J");


//#include se refere às bibliotecas usadas principalmente no C/C++
#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

//AQUI SÃO AS FUNÇÕES
void Exercicio1();
void Exercicio2();
void Exercicio3();
void Exercicio4();
void Exercicio5();
void Exercicio6();
void Exercicio7();
void Exercicio8();
void TrocarOpcao();
void Menu_ListaExercicios();
int Interface_DataExercicios();
int Menu_DataExercicios();
int Interface_ListaExercicios();
int Lista_Exercicios();

//VARIÁVEIS GLOBAIS
int g_Opcao, g_DataExercicios, g_CasoExercicios;
main () {


    //DEFININDO ACEITAÇÃO DE CARACETERES ESPCIAIS COMO "~" "Ç,ACENTUAÇÃO E OUTROS
	setlocale(LC_ALL, "Portuguese");

	//Primeiro menu, escolhendo o dia que foi passado os exercícios
	g_DataExercicios = Interface_DataExercicios();

	//Verificação se encerra ou continua no programa
	 Menu_DataExercicios();


	// Escolhendo os exercícios
    Menu_ListaExercicios();


	std::cout << "\nPrograma Encerrado com sucesso! \n";


}


//Verificação se encerra ou continua no programa
int Menu_DataExercicios(){
	if (g_DataExercicios == 1) {
	//Segundo menu, escolhendo o exercício em questão
	 g_Opcao = Interface_ListaExercicios();
	 Lista_Exercicios();


	}else if (g_DataExercicios == 2) {
		 g_CasoExercicios = -1;
	}else if (g_DataExercicios!=1 && g_DataExercicios!=2) {
		 g_CasoExercicios = 666;
	}
    return g_CasoExercicios;


}


//
void Menu_ListaExercicios(){
    do {
    switch (g_CasoExercicios) {
        case 1: {
            Exercicio1();

            break;
        }
        case 2 : {
            Exercicio2();
            break;
        }
        case 3: {
            Exercicio3();
            break;
        }
        case 4: {
            Exercicio4();
            break;
        }
        case 5: {
            Exercicio5();
            break;
        }
        case 6: {
            Exercicio6();
            break;
        }
        case 7: {
            Exercicio7();
            break;
        }
        case 8: {
            Exercicio8();
            break;
        }
        case 666 : {
            std::cout << "Opção inválida, por favor escolha uma das opção listadas\n";
            g_CasoExercicios =0;
            g_DataExercicios = Interface_DataExercicios();
            g_CasoExercicios= Menu_DataExercicios();


            break;
            }

        }

    }
        while (g_CasoExercicios > 0);

}

//Primeiro menu, lendo o dia que foi passado os exercícios
int Interface_DataExercicios (){
	 int g_DataExercicios;

	std::cout << "Seleciona a Data da aula";
	std::cout << "\n1- 23.03";
	std::cout << "\n2 Sair \n";
	std::cin >> g_DataExercicios;
	system("clear");

	return g_DataExercicios;

}

//Segundo menu, lendo exercício do dia 23.03
int Interface_ListaExercicios(){

	std::cout << "Selecione o Exercício\n";
	std::cout << "1- Ler o nome e a idade e mostrar o dobro da idade";
	std::cout << "\n2- Ler nome e idade e mostrara a metade da idade";
	std::cout << "\n3- Ler nome, idade, um número para retirar da idade e mostrar o resultado";
	std::cout << "\n4- Ler preço por litro da gasolina, valor total abastecimento, exibir quantos litros abastecidos";
	std::cout << "\n5- Ler peso do prato do cliente, imprimir o valor a pagar assumindo que o preso por quilo é de 12,00";
	std::cout << "\n6- Receber o peso da pessoa, calcular e motrar o peso g_CasoExercicios a pessoa engorde 15% ou 20%";
	std::cout << "\n7- Calcular e mostrar área do trapézio";
	std::cout << "\n8- Receber ano de nascimento, ano atual, calcular e mostrar a idade em anos, meses, dias e semanas\n";
	std::cout << "\n-0 Fechar o programa\n";

	std::cin >> g_Opcao;
	system("clear");

	return g_Opcao;


}


//Definindo em qual Exercício entrar
int Lista_Exercicios() {

	if ((g_Opcao == 1 ) && ( g_DataExercicios == 1)) {

	 g_CasoExercicios = 1;
	}else if ((g_Opcao == 2 ) && ( g_DataExercicios == 1)) {
		g_CasoExercicios = 2;

	}else if ((g_Opcao == 3 ) && ( g_DataExercicios == 1)) {
		g_CasoExercicios = 3;
	}else if ((g_Opcao == 4 ) && ( g_DataExercicios == 1)) {
		g_CasoExercicios = 4;
	}else if ((g_Opcao == 5 ) && ( g_DataExercicios == 1)) {
		g_CasoExercicios = 5;
	}else if ((g_Opcao == 6 ) && ( g_DataExercicios == 1)) {
		g_CasoExercicios = 6;
	}else if ((g_Opcao == 7 ) && ( g_DataExercicios == 1)) {
		g_CasoExercicios = 7;
	}else if ((g_Opcao == 8 )  && (g_DataExercicios == 1)) {
		g_CasoExercicios = 8;
	}else if ((g_Opcao == 0 ) && (g_DataExercicios == 1 )) {
		g_CasoExercicios = 0;
	}else if (g_Opcao > 8 && g_DataExercicios == 1){
		g_CasoExercicios = 666;
	}else if ((g_Opcao < 1 || g_DataExercicios )) {

		system("clear");
		std::cout << "Opção inválida, por favor escolha uma das opção listadas\n";
		g_Opcao = Interface_ListaExercicios();
		g_CasoExercicios = g_Opcao;
	}

	return g_CasoExercicios;

}


//TROCANDO DE OPÇÃO APÓS TERMINAR O EXERCÍCIO
void TrocarOpcao() {
	int TrocarOpcao;

	std::cout << "Trocar de Exercício?\n";
	std::cout << "1- Sim\n";
	std::cout << "2- Não\n";
	std::cin >> TrocarOpcao;

	if (TrocarOpcao == 1) {
		system("clear");
		g_Opcao = Interface_ListaExercicios();
		g_CasoExercicios = g_Opcao;

	}else if (TrocarOpcao == 2) {
		g_CasoExercicios = g_Opcao;
	} else if (TrocarOpcao > 2) {
		system("clear");
		std::cout << "Opção inválida, por favor escolha uma das opção listadas\n";
		g_Opcao = Interface_ListaExercicios();
		g_CasoExercicios = g_Opcao;
	}
	else {

		system("clear");
		std::cout << "Opção inválida, por favor escolha uma das opção listadas\n";
		g_Opcao = Interface_ListaExercicios();
		g_CasoExercicios = g_Opcao;
	}

	printf("\033[2J");
}


//Ler o nome e a idade e mostrar o dobro da idade
void Exercicio1() {

	std::string Nome;
	int Idade, Idade_Dobro, g_Opcao;

	std::cout << "Digite seu nome: ";
	std::cin >> Nome;

	std::cout << "Digite sua idade: ";
	std::cin >> Idade;

	Idade_Dobro = Idade * 2;
	std::cout << "O dobro da sua idade é: " << Idade_Dobro << "\n";
	std::cout << Nome << "\n";
	getchar();
	TrocarOpcao();

}


//Ler nome e idade e mostrar a metade da idade
void Exercicio2() {

	std::string Nome;
	float Idade_Metade, Idade, g_Opcao;

	std::cout << "Digite seu nome: ";
	std::cin >> Nome;

	std::cout << "Digite sua idade: ";
	std::cin >> Idade;

	Idade_Metade = Idade / 2;

	std::cout << "A metade da sua idade é: " << Idade_Metade <<"\n";
	getchar();
	TrocarOpcao();


}


//Ler nome, idade, um número para retirar da idade e mostrar o resultado
void Exercicio3(){
	std::string Nome;

	int Idade, Numero, Idade_Final, g_Opcao;

	std::cout << "Digite seu nome: ";
	std::cin >> Nome;

	std::cout << "Digite sua idade: ";
	std::cin >> Idade;

	std::cout << "Digite o número para retirar da sua idade: ";
	std::cin >> Numero;

	Idade_Final = Idade - Numero;

	std::cout << "Sua idade menos o número digite é de:  " << Idade_Final <<"\n";
	getchar();
	TrocarOpcao();




}


//Ler preço por litro da gasolina, valor total abastecimento, exibir quantos litros abastecidos
void Exercicio4() {

	float Litros, Preco_Gasolina, Total;
	int g_Opcao;

	std::cout << "Insira o preço da gasolina: ";
	std::cin >> Preco_Gasolina;

	std::cout << "Insira o valor total a ser pago: ";
	std::cin >> Total;

	Litros = Total / Preco_Gasolina;

	std::cout << "Esta é a quantidade de litros que você colocou no tanque: " << Litros <<"\n";
	getchar();
	TrocarOpcao();


}


//Ler peso do prato do cliente, imprimir o valor a pagar assumindo que o preso por quilo é de 12,00
void Exercicio5() {
	const int Refeicao_Quilo = 12;
	float Peso, Valor_Total;
	int g_Opcao;

	std::cout << "Digite o peso do prato em quilos: ";
	std::cin >> Peso;

	Valor_Total = Peso * Refeicao_Quilo;

	std::cout << "O valor total a pagar é de: R$" << Valor_Total <<"\n";
	getchar();
	TrocarOpcao();




}


//Receber o peso da pessoa, calcular e motrar o peso g_CasoExercicios a pessoa engorde 15% ou 20%
void Exercicio6() {

	float Peso, Novo_Peso15, Novo_Peso20;
	int g_Opcao;

	std::cout << "Digite seu peso em quilos: ";
	std::cin >> Peso;

	Novo_Peso15 = (Peso * 0.15) + Peso;
	Novo_Peso20 = (Peso * 0.20) + Peso;

	std::cout << "O seu peso g_CasoExercicios você engorde 15% é de: " << Novo_Peso15 << "\n" ;
	std::cout << "O seu peso g_CasoExercicios você engorde 20% é de: " << Novo_Peso20 <<"\n";
	getchar();

}


//Calcular e mostrar área do trapézio
void Exercicio7() {


	float Base_Maior, Base_Menor, Altura, Area;
	int g_Opcao;

	std::cout << "Digite a base maior do trapézio: ";
	std::cin >> Base_Maior;

	std::cout << "Digite a base menor do trapézio: ";
	std::cin >>Base_Menor;

	std::cout << "Digite a altura do trapézio: ";
	std::cin >> Altura;

	Area = (Base_Maior + Base_Menor) * (Altura/2);

	std::cout << "A área do trapézio é de: " << Area <<"\n";
	getchar();
	TrocarOpcao();



}


//Receber ano de nascimento, ano atual, calcular e mostrar a idade em anos, meses, dias e semanas
void Exercicio8(){
	int Ano_Nascimento, Ano_Atual, Idade_Atual, Idade_Meses, Idade_Dias, Idade_Semanas, g_Opcaos;
	std::cout << "Digite seu ano de nascimento: ";
	std::cin >> Ano_Nascimento;

	std::cout << "Digite o ano atual: ";
	std::cin >> Ano_Atual;


	Idade_Atual = Ano_Atual - Ano_Nascimento;
	Idade_Meses = Idade_Atual * 12;
	Idade_Dias = (Idade_Meses * 30);
	Idade_Dias += 5;
	Idade_Semanas = Idade_Dias / 7;


	std::cout << "Sua idade atual em anos é de: " << Idade_Atual << "\n";
	std::cout << "Sua idade atual em meses é de: " << Idade_Meses << "\n";
	std::cout << "Sua idade atual em dias é de: " << Idade_Dias << "\n";
	std::cout << "Sua idade atual em semanas é de: " <<Idade_Semanas <<"\n";
	getchar();
	TrocarOpcao();
}
