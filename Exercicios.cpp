//Atenção, todos exercícios estão no final do arquivo, antes disso são apenas estruturas para o menu que eu fiz para mim!
//Dê CTRL + F e procure por "Calcula_DobroIdade, Calcula_MetadeIdade, Calcula_IdadeMenosNumero, Calcula_LitrosAbastecidos, Calcula_ValorComidaQuilo..." São os respectivos números dos exercícios
//Comando "printf("\033[2J");


//#include se refere às bibliotecas usadas principalmente no C/C++
#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

//AQUI SÃO AS FUNÇÕES
void Calcula_DobroIdade();
void Calcula_MetadeIdade();
void Calcula_IdadeMenosNumero();
void Calcula_LitrosAbastecidos();
void Calcula_ValorComidaQuilo();
void Cacula_Peso();
void Calcula_AreaTrapezio();
void Calcula_Idade();
void TrocarOpcao();
void Menu_ListaExercicios();
int Interface_DataExercicios();
int Menu_DataExercicios();
int Interface_ListaExercicios();
int Lista_Exercicios();

//VARIÁVEIS GLOBAIS
int g_Opcao, g_DataExercicios, g_CasoExercicios;
int main () {


    //DEFININDO ACEITAÇÃO DE CARACETERES ESPCIAIS COMO "~" "Ç,ACENTUAÇÃO E OUTROS
	setlocale(LC_ALL, "Portuguese");

	//Primeiro menu, escolhendo o dia que foi passado os exercícios
	g_DataExercicios = Interface_DataExercicios();

	//Verificação se encerra ou continua no programa
	 Menu_DataExercicios();


	// Escolhendo os exercícios
    Menu_ListaExercicios();


	std::cout << "\nPrograma Encerrado com sucesso! \n";
    return 0;

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
            Calcula_DobroIdade();

            break;
        }
        case 2 : {
            Calcula_MetadeIdade();
            break;
        }
        case 3: {
            Calcula_IdadeMenosNumero();
            break;
        }
        case 4: {
            Calcula_LitrosAbastecidos();
            break;
        }
        case 5: {
            Calcula_ValorComidaQuilo();
            break;
        }
        case 6: {
            Cacula_Peso();
            break;
        }
        case 7: {
            Calcula_AreaTrapezio();
            break;
        }
        case 8: {
            Calcula_Idade();
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



//INICIO DOS EXERCICIOS DO DIA 23.03
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
void Calcula_DobroIdade() {

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
void Calcula_MetadeIdade() {

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
void Calcula_IdadeMenosNumero(){
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
void Calcula_LitrosAbastecidos() {

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
void Calcula_ValorComidaQuilo() {
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


//Receber o peso da pessoa, calcular e mostrar o peso Caso a pessoa engorde 15% ou Emagreça 20%
void Cacula_Peso() {

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
void Calcula_AreaTrapezio() {


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
void Calcula_Idade(){




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
//FIM DOS EXERCICIOS DO DIA 23.03
//***
//**
//*

//INICIO DOS EXERCICIOS DO DIA 06.04
//Verificando se um número é impar ou par
void Verifica_ImparPar (){

    int Numero;

    std::cout << "Digite o número: ";
    std::cin >> Numero;


    if (Numero % 2 == 0){
        std::cout << "O número" << Numero <<"é par";
    }else {
        std::cout << "O número" << Numero <<  "é impar";

    }
}

//Calculando o PESO IDEAL com base no Sexo escolhido
void Calcula_PesoIdeal () {
    float Peso, PesoIdeal;
    char Sexo;
    std::cout << "Entre com o seu sexo, 'F' para Ferminino e 'M' para masculino\n";
    std::cin >> Sexo;

    std::cout << "Agora insira seu peso";
    std::cin >> Peso;

    if(Sexo == 'H' || Sexo == 'h'){
        PesoIdeal = (72.7 * Peso) - 58;

    }else if(Sexo == 'F' || Sexo == 'F')  {
        PesoIdeal = (62.1 * Peso)- 44.7;

    }

}

//Verifica com base na media do aluno se ele foi aprovado ou não
void Calcula_SituacaoAluno () {
    float Nota1, Nota2, Nota3, Nota4, Media;

    std::cout << "Insira sua 1º nota\n ";
    std::cin  >> Nota1;
    std::cout << "Insira sua 2º nota\n ";
    std::cin  >> Nota2;
    std::cout << "Insira sua 3º nota\n ";
    std::cin  >> Nota3;
    std::cout << "Insira sua 4º nota\n ";
    std::cin  >> Nota4;

    Media = (Nota1 + Nota2 + Nota3 + Nota4) / 4;

    if(Media >= 6){
    std::cout << "Sua média foi de: " << Media << "E você foi aprovado";

    }else{
    std::cout << "Sua média foi de: " << Media << "E você não foi aprovado";

    }

}

//Calcula idade e com base na idade verifica se a pessoa tem idade para votar ou tirar carteira de habilitação
void Verifica_Idade_VotarHabilitacao(){
    int AnoNascimento, Idade;
    const int AnoAtual = 2020;
    std::cout << "Digite sua data de nascimento";
    std::cin >> AnoNascimento;
    Idade = AnoAtual - AnoNascimento;

    if (Idade >=16 &&  Idade <18) {
    std::cout << "Você já tem idade para VOTAR mas não tem idade para conseguir a HABILITAÇÃO";


    }else{
    std::cout << "Você tem idade para VOTAR e para conseguir a HABILITAÇÃO";

    }


}

//Verifica o tempo de casada caso o sexo seja Feminino e estado civil Casada
void TempoCasamento (){
    char Sexo;
    std::string EstadoCivil, Nome;
    int IdadeCasamento;

    std::cout << "Digite seu nome\n";
    std::cin >> Nome;

    std::cout << "Insira seu sexo 'F' feminino ou 'M' masculino\n";
    std::cin >> Sexo;

    std::cout << "Digite seu estado civil: SOLTEIRA, CASADA, VIUVA";
    std::cin >> EstadoCivil;

    if (Sexo == 'F' && EstadoCivil == "CASADA"){
    std::cout << "Por favor, digite seu tempo de casada em anos";
    std::cin >> IdadeCasamento;

    }


}

//Faz o calculo da soma ou multiplicação na verificação se os dois números digitados são iguais ou não
void Calcula_SomaMultiplicacao(){
    float A,B,C;


    std::cout << "Por favor digite o primeiro valor: \n";
    std::cin >> A;

    std::cout << "Por favor, digite o segundo valor: \n";
    std::cin >> B;

    if(A==B){
    C= A+B;
    std::cout << "O valor da soma é de: " << C;

    }else {
    C = A*B;
    std::cout << "O valor da multiplicação é de: " << C;


    }



}

//Calcular o dobrou ou o triplo com base se o número é positivo ou negativo
void Calcula_DobroTriplo(){
    int A;

    std::cout << "Digite o número: ";
    std::cin >> A;

    if (A > 0){
        A = A*2;
        std::cout << "O dobro do número inserido é: " << A;
    }else{
        A = A*3;
        std::cout << "O triplo do número inserido é: " << A;
    }

}

//Ler um número e somar 5 caso seja par ou somar 8 caso seja impar
void Soma_ParImpar(){
    int Numero;

    std::cout << "Digite um número";
    std::cin >> Numero;

    if (Numero%2 == 0){
    Numero += 5;
    std::cout << Numero;
    }else {
    Numero +=8;
    std::cout << Numero;
    }

}
//FIM DOS EXERCICIOS DO DIA 06.04
//***
//**
//*

























