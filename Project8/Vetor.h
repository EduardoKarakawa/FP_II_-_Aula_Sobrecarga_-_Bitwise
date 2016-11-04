#pragma once
#include <ostream>
class Vetor{
public:

	float m_x, m_y;
	Vetor(float x, float y) : m_x(x), m_y(y) {};
	Vetor() : m_x(0.0f), m_y(0.0f) {}


	void Set(float x, float y) {
		m_x = x;
		m_y = y;
	}


	float GetX() const { // o const indica que eh uma funcao somente de leitura
		return m_x;
	}


	float GetY() const { // o const indica que eh uma funcao somente de leitura
		return m_y;
	}


	//produto por numero escalar
	Vetor operator* (float n) {

		float novoX = GetX() * n;
		float novoY = GetY() * n;
		return Vetor(novoX, novoY);
	}

	Vetor operator- (Vetor v) {
		float novoX = GetX() - v.GetX();
		float novoY = GetY() - v.GetY();
		return Vetor(novoX, novoY);
	}



	~Vetor(){}

private:

};

// Operador de Saída sobrecarregado.
 ostream &operator<< (ostream &saida, Vetor& s)
{
	saida << "(" << s.GetX() << ", " << s.GetY() << ")";
	return saida; // possibilita encadeamento
}
