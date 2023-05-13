// Arquivo de implementação das classes de entidades.
#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include <string>
#include "dominios.h"

using namespace std;

// -------------------
// Entidade Desenvolvedor.

class Desenvolvedor
{
private:
    Matricula matricula;
    Texto nome;
    Senha senha;
    Telefone telefone;

public:
    void setMatricula(const Matricula &);
    Matricula getMatricula() const;

    void setNome(const Texto &);
    Texto getNome() const;

    void setSenha(const Senha &);
    Senha getSenha() const;

    void setTelefone(const Telefone &);
    Telefone getTelefone() const;
};

// Métodos modificadores da entidade Desenvolvedor
inline void Desenvolvedor::setMatricula(const Matricula &matricula)
{
    this->matricula = matricula;
};
inline void Desenvolvedor::setNome(const Texto &nome)
{
    this->nome = nome;
};
inline void Desenvolvedor::setSenha(const Senha &senha)
{
    this->senha = senha;
};
inline void Desenvolvedor::setTelefone(const Telefone &telefone)
{
    this->telefone = telefone;
};

// Métodos acessadores da entidade Desenvolvedor
inline Matricula Desenvolvedor::getMatricula() const
{
    return matricula;
};
inline Texto Desenvolvedor::getNome() const
{
    return nome;
};
inline Senha Desenvolvedor::getSenha() const
{
    return senha;
};
inline Telefone Desenvolvedor::getTelefone() const
{
    return telefone;
};

// -------------------
// Entidade Teste.

class Teste
{
private:
    Codigo codigo;
    Texto nome;
    Classe classe;

public:
    void setCodigo(const Codigo &);
    Codigo getCodigo() const;

    void setNome(const Texto &);
    Texto getNome() const;

    void setClasse(const Classe &);
    Classe getClasse() const;
};

// Métodos modificadores da entidade Teste
inline void Teste::setCodigo(const Codigo &codigo)
{
    this->codigo = codigo;
};
inline void Teste::setNome(const Texto &nome)
{
    this->nome = nome;
};
inline void Teste::setClasse(const Classe &classe)
{
    this->classe = classe;
};

// Métodos acessadores da entidade Teste
inline Codigo Teste::getCodigo() const
{
    return codigo;
};
inline Texto Teste::getNome() const
{
    return nome;
};
inline Classe Teste::getClasse() const
{
    return classe;
};

// -------------------
// Entidade Caso de Teste.

class CasoDeTeste
{
private:
    Codigo codigo;
    Data data;
    Texto nome;
    Texto acao;
    Texto resposta;
    Resultado resultado;

public:
    void setCodigo(const Codigo &);
    Codigo getCodigo() const;

    void setData(const Data &);
    Data getData() const;

    void setNome(const Texto &);
    Texto getNome() const;

    void setAcao(const Texto &);
    Texto getAcao() const;

    void setResposta(const Texto &);
    Texto getResposta() const;

    void setResultado(const Resultado &);
    Resultado getResultado() const;
};

// Métodos acessadores da entidade Caso de Teste
inline void CasoDeTeste::setCodigo(const Codigo &codigo)
{
    this->codigo = codigo;
};
inline void CasoDeTeste::setNome(const Texto &nome)
{
    this->nome = nome;
};
inline void CasoDeTeste::setData(const Data &data)
{
    this->data = data;
};
inline void CasoDeTeste::setAcao(const Texto &acao)
{
    this->acao = acao;
};
inline void CasoDeTeste::setResposta(const Texto &resposta)
{
    this->resposta = resposta;
};
inline void CasoDeTeste::setResultado(const Resultado &resultado)
{
    this->resultado = resultado;
};

// Métodos modificadores da entidade Caso de Teste
inline Codigo CasoDeTeste::getCodigo() const
{
    return codigo;
};
inline Texto CasoDeTeste::getNome() const
{
    return nome;
};
inline Data CasoDeTeste::getData() const
{
    return data;
};
inline Texto CasoDeTeste::getAcao() const
{
    return acao;
};
inline Texto CasoDeTeste::getResposta() const
{
    return resposta;
};
inline Resultado CasoDeTeste::getResultado() const
{
    return resultado;
};

#endif // ENTIDADES_H_INCLUDED