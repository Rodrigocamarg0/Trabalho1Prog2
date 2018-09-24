// Trabalho 1 - Prog2 - 3.13
// Rodrigo Nunes Camargo
// Arthur Lima

#include <iostream>
#include <string>

using namespace std;


class Invoice {


private:

string identificador;

string descricao;

int quantidade;

int preco;


public:


 Invoice (string, string, int ,int);

void setIdentificador (string);

void setDescricao (string);

void setQuantidade (int);

void setPreco(int);



string getIdentificador();

string getDescricao();

int getQuantidade ();

int getPreco ();

int getValorNota ();

};


int main() {
  

Invoice nota1("001","Teclado Gamer",2,150);


cout << "Identificador:" << nota1.getIdentificador() << endl;

cout << "Descriçao:" << nota1.getDescricao() << endl;

cout << "Quantidade:" << nota1.getQuantidade() << endl;

cout << "Preço:" << nota1.getPreco() << endl;

cout << "Valor da nota:" << nota1.getValorNota() << endl;

cout << endl;
cout << endl;

Invoice nota2("002","Notebook Dell",3,3500);


cout << "Identificador:" << nota2.getIdentificador() << endl;

cout << "Descriçao:" << nota2.getDescricao() << endl;

cout << "Quantidade:" << nota2.getQuantidade() << endl;

cout << "Preço:" << nota2.getPreco() << endl;

cout << "Valor da nota:" << nota2.getValorNota() << endl;



return 0;


}




Invoice::Invoice(string Item, string TipoItem, int Numero, int Valor)
{

setIdentificador(Item);
setDescricao(TipoItem);
setQuantidade(Numero);
setPreco(Valor);

}

void Invoice::setIdentificador(string Item)
{

identificador = Item;

}


void Invoice::setDescricao(string TipoItem)
{

descricao = TipoItem;

}

void Invoice::setQuantidade (int Numero) {

if (Numero > 0)
quantidade = Numero;
if(Numero <= 0)
quantidade = 0;
}


void Invoice::setPreco(int Valor)
{
if(Valor > 0)
preco = Valor;
if(preco <= 0)
preco = 0;
}

string Invoice::getIdentificador()
{
return identificador;
}


string Invoice::getDescricao()
{
return descricao;
}

int Invoice::getPreco()
{
return preco;
}

int Invoice::getQuantidade()
{
return quantidade;

}

int Invoice::getValorNota()
{
return getQuantidade()*getPreco();
}
