// Arquivo de implementação dos metodos das classes de teste das entidades.
#include <stdexcept>
#include "testes_entidades.h"

// -----------------------------------------------------------
// Implementações do metodo "run" da classe de teste unitario.

int TesteUnitario::run()
{
    setUp();
    tearDown();
    //testarCenarioSucesso();
    //testarCenarioFalha();
    return estado;
}

// --------------------------------------------------
// Implementações dos metodos da entidade Desenvolvedor.


void TesteDesenvolvedor::setUp()
{
    desenvolvedor_teste = new Desenvolvedor();
    estado = SUCESSO;
};

void TesteDesenvolvedor::tearDown()
{
    delete desenvolvedor_teste;
    desenvolvedor_teste = nullptr;
};

// Implementações dos metodos da entidade Teste.
void TesteTeste::setUp()
{
    teste_teste = new Teste();
    estado = SUCESSO;
};

void TesteTeste::tearDown()
{
    delete teste_teste;
    teste_teste = nullptr;
};

// Implementações dos metodos da entidade Caso de Teste.
void TesteCasoDeTeste::setUp()
{
    teste_caso_de_teste = new CasoDeTeste();
    estado = SUCESSO;
};

void TesteCasoDeTeste::tearDown()
{
    delete teste_caso_de_teste;
    teste_caso_de_teste = nullptr;
};
/*
void TesteDesenvolvedor::testarCenarioSucesso()
{
    Matricula matricula;
    Texto nome;
    Senha senha;
    Telefone telefone;
    try
    {
        matricula.set_valor_dominio("1234560");
        desenvolvedor_teste->setMatricula(matricula);
        if (desenvolvedor_teste->getMatricula().get_valor_dominio() != "1234560")
            estado = FALHA;

        nome.set_valor_dominio("Xarope doce");
        desenvolvedor_teste->setNome(nome);
        if (desenvolvedor_teste->getNome().get_valor_dominio() != "Xarope doce")
            estado = FALHA;

        senha.set_valor_dominio("MAR123");
        desenvolvedor_teste->setSenha(senha);
        if (desenvolvedor_teste->getSenha().get_valor_dominio() != "MAR123")
            estado = FALHA;

        telefone.set_valor_dominio("+4831272");
        desenvolvedor_teste->setTelefone(telefone);
        if (desenvolvedor_teste->getTelefone().get_valor_dominio() != "+4831272")
            estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        estado = FALHA;
    }
};

*/