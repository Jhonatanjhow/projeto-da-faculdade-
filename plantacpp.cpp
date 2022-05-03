#include <iostream>
#include <string>
using namespace std;

class Planta
{
	string nome;
	string pais;
	string teste;
	float altura;
	float distancia;

public:
	
	Planta(){}
	
	Planta(string n, string p, float a, float d)
	{
		this->nome = n;
		this->pais = p;
		this->altura = a;
		this->distancia = d;
	}
	
	~Planta(){} //Destructor da classe
	
	void getNome()
	{
		getline(cin, nome);
	}
	
	void getPais()
	{
		getline(cin, pais);
	}
	
	void getAltura()
	{
		cin >> altura;
	}
	
	void getDistancia()
	{
		cin >> distancia;
	}
	
	virtual float unidadesKM2()
	{
		return (1000.0 / distancia) * (1000.0 / distancia);
	}
	
	virtual void mostra()
	{
		cout << "\nPlanta" << nome << "(origem:" << pais;
		cout << ", Altura" << altura << ")";
	}

};

class Folha: public Planta
{
		
	public:
		
		void mostra()
		{
			cout << "Sobrecarregando o procedimento!" << endl;
		}
		
		//override
		float unidadesKM2()
		{
			return (10 * 10);
		}

};

//a) Fazer uma heranca da classe Planta --ok
//b) Fazer uma sobrecarga de uma funcao da classe planta --ok
//c) fazer uma sobreescrita de uma funcao da classe pai(Planta) na classe filha --ok
//d) Utilizar polimorfismo para estas classes: num vetor ou lista de plantas, na main
//insira pelo menos 2 objetos de cada classe nesta estrutura, chamando as funcoes criadas --ok
//e) Teste suas funcoes na main --ok

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

const int tamanho = 2;

int main() 
{
	
	Planta p[tamanho];
	Folha f[tamanho];
	
	for(int i = 0; i < tamanho; i++)
	{
		cout << "Classe Planta" << i + 1 << endl;
		
		cout << "Entre com o nome" << endl;
		p[i].getNome();
		
		cout << "Entre com o Pais" << endl;
		p[i].getPais();
		
		cout << "Entre com a Altura" << endl;
		p[i].getAltura();
		
		cout << "Entre com a Distancia" << endl;
		p[i].getDistancia();
		
		/*Planta *plantando;
		plantando = new Planta(nome, pais, altura, distancia);
		
		plantando->unidadesKM2();
		plantando->mostra();*/
	}
	
	//Mostra os dados
	for(int i = 0; i < tamanho; i++)
	{
		cout << "Folha" << i + 1 << endl;
		p[i].mostra();
	}
	
		for(int i = 0; i < tamanho; i++)
	{
		cout << "Classe Folha" << i + 1 << endl;
		
		cout << "Entre com o nome" << endl;
		f[i].getNome();
		
		cout << "Entre com o Pais" << endl;
		f[i].getPais();
		
		cout << "Entre com a Altura" << endl;
		f[i].getAltura();
		
		cout << "Entre com a Distancia" << endl;
		f[i].getDistancia();
		
		/*Planta *plantando;
		plantando = new Planta(nome, pais, altura, distancia);
		
		plantando->unidadesKM2();
		plantando->mostra();*/
	}
	
	//Mostra os dados
	for(int i = 0; i < tamanho; i++)
	{
		cout << "Folha" << i + 1 << endl;
		f[i].mostra();
	}
	
	return 0;
}
