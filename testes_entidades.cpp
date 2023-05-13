// Arquivo de implementação dos metodos das classes de teste das entidades.
#include <stdexcept>
#include "testes_entidades.h"

// -----------------------------------------------------------
// Implementações do metodo "run" da classe de teste unitario.

int TesteUnitario::run()
{
    setUp();
    tearDown();
    testarCenarioSucesso();
    testarCenarioFalha();
    return estado;
}

// --------------------------------------------------
// Implementações dos metodos da classe Desenvolvedor.

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

        nome.set_valor_dominio("Paulo doido");
        desenvolvedor_teste->setNome(nome);
        if (desenvolvedor_teste->getNome().get_valor_dominio() != "Paulo doido")
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
void TesteDesenvolvedor::testarCenarioFalha()
{
    Matricula matricula;
    Texto nome;
    Senha senha;
    Telefone telefone;
    try
    {
        matricula.set_valor_dominio("1234567");
        desenvolvedor_teste->setMatricula(matricula);
        if (desenvolvedor_teste->getMatricula().get_valor_dominio() != "1234567")
            estado = FALHA;

        nome.set_valor_dominio("Paulo     doido");
        desenvolvedor_teste->setNome(nome);
        if (desenvolvedor_teste->getNome().get_valor_dominio() != "Paulo doido")
            estado = FALHA;

        senha.set_valor_dominio("MAAR123");
        desenvolvedor_teste->setSenha(senha);
        if (desenvolvedor_teste->getSenha().get_valor_dominio() != "MAR123")
            estado = FALHA;

        telefone.set_valor_dominio("61999558790");
        desenvolvedor_teste->setTelefone(telefone);
        if (desenvolvedor_teste->getTelefone().get_valor_dominio() != "+4831272")
            estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        estado = FALHA;
    }
};
