#include <string>
#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

using namespace std;

// ----------------
// Classe dominio.
// Classe abstrata.

class Dominio
{
protected:
    string valor_dominio;
    virtual void validar_dominio(string) = 0;

public:
    void set_valor_dominio(string);
    string get_valor_dominio() const;
};

inline string Dominio::get_valor_dominio() const
{
    return valor_dominio;
}

// --------------
// Classe classe.

/// Regras de formatação:
///
/// Só pode possuir os seguintes valores: UNIDADE, INTEGRACAO, FUMACA, SISTEMA, REGRESSAO, ACEITACAO.

class Classe : public Dominio
{
private:
    void validar_dominio(string codigo) override;
};

// --------------
// Classe codigo.

/// Regras de formatação:
///
/// - Formato LLLDDD;
/// - D é dígito (0-9);
/// - L é letra (A-Z, a-z);

class Codigo : public Dominio
{
private:
    void validar_dominio(string codigo) override;
};

// ------------
// Classe data.

/// Regras de formatação:
///
/// - DD - 1 a 31
/// - ANO - 2000 a 2999;
/// - Formato DD/MES/ANO;
/// - MES - JAN, FEV, MAR, ABR, MAI, JUN, JUL, AGO, SET, OUT, NOV, DEZ;
/// - Deve ser levado em consideração se o ano é bissexto ou não é bissexto;

class Data : public Dominio
{
private:
    void validar_dominio(string) override;
};

// -----------------
// Classe matricula.

/// Regras de formatação:
///
/// - Formato DDDDDDX;
/// - D é dígito (0-9);
/// - X é dígito verificador calculado com módulo 10;

class Matricula : public Dominio
{
private:
    bool calculo_modulo_10(string);
    void validar_dominio(string) override;
};

// -----------------
// Classe resultado.

/// Regras de formatação:
///
/// Só pode possuir os seguintes valores: APROVADO e REPROVADO;

class Resultado : public Dominio
{
private:
    void validar_dominio(string) override;
};

// -------------
// Classe senha.

/// Regras de formatação:
///
/// - Formato XXXXXX;
/// - Não pode haver caractere duplicado;
/// - X é um dos seguintes caracteres: letra (A-Z, a-z), dígito (0-9), @, #, $, % ou &;

class Senha : public Dominio
{
private:
    void validar_dominio(string) override;
};

// ----------------
// Classe telefone.

/// Regras de formatação:
///
/// - X é dígito (0 - 9);
/// - Formato +XXXXXXX (7 dígitos) a +XXXXXXXXXXXXXXX (15 dígitos);

class Telefone : public Dominio
{
private:
    void validar_dominio(string) override;
};

// -------------
// Classe texto.

/// Regras de formatação:
///
/// - Não há acentuação;
/// - 10 a 20 caracteres;
/// - Não há espaços em branco em sequência;
/// - Cada caractere X é letra, dígito (0-9), sinal de pontuação (. , ; ? ! : -), @, #, $, % ou &;

class Texto : public Dominio
{
private:
    void validar_dominio(string) override;
};

#endif // DOMINIOS_H_INCLUDED