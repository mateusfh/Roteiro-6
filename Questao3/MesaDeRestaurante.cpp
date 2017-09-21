/*
 * MesaDeRestaurante.cpp
 *
 *  Created on: 20/09/2017
 *      Author: Raphael
 */

#include "MesaDeRestaurante.h"

MesaDeRestaurante::MesaDeRestaurante() {
	this->zeraPedidos();
}

void MesaDeRestaurante::adiconaAoPedido(){
	int numero, quantidade;
	string descricao;
	double preco;

	cout << "*********PEDIDOS**********" << endl;
	cout << "Numero: "; cin >> numero;
	cout << "Descricao: "; cin >> descricao;
	cout << "Quantidade: "; cin >> quantidade;
	cout << "Preco: "; cin >> preco;

	this->pedido[this->auxiliar].setPedido( numero, descricao, quantidade, preco);
	this->auxiliar++;
}

void MesaDeRestaurante::zeraPedidos(){
	int i;
	for( i = 0; i < MAX_PEDIDOS; i++){
		this->pedido[i].setPedido( 0, "", 0, 0.0);
	}
	this->auxiliar = 0;
}

double MesaDeRestaurante::calculaPedidos(){
	double soma = 0;
	int i;
	for( i = 0; i < this->auxiliar; i++ ){
		soma += this->pedido[i].getQuantidade() * this->pedido[i].getPreco();
	}
	return soma;
}
