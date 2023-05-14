// Arquivo de implementação das classes de teste das entidades.
#include "entidades.h"

// ----------------------------------
// Classe para fazer teste unitarios.

/**
 *
 * @brief Classe abstrata.
 */
class TesteUnitario
{
protected:
    int estado;
    virtual void setUp() = 0;
    virtual void tearDown() = 0;
    virtual void testarCenarioSucesso() = 0;

public:
    /**
     * @brief Metodo para executar o teste.
     * @return O estado do teste (SUCESSO ou FALHA).
     */
    int run();

    /**
     * @brief Constante respresentando o sucesso do teste.
     */
    const static int SUCESSO = 1;

    /**
     * @brief Constante respresentando a falha do teste.
     */
    const static int FALHA = -1;
};

// ------------------------------------
// Classe para testar a entidade Desenvolvedor.
class TesteDesenvolvedor : public TesteUnitario
{
private:
    Desenvolvedor *desenvolvedor_teste;
    void setUp() override;
    void testarCenarioSucesso() override;
    void tearDown() override;
};

// ------------------------------------
// Classe para testar a entidade Teste.
class TesteTeste : public TesteUnitario
{
private:
    Teste *teste_teste;
    void setUp() override;
    void testarCenarioSucesso() override;
    void tearDown() override;
};

// ------------------------------------
// Classe para testar a entidade CasoDeTeste.
class TesteCasoDeTeste : public TesteUnitario
{
private:
    CasoDeTeste *teste_caso_de_teste;
    void setUp() override;
    void testarCenarioSucesso() override;
    void tearDown() override;
};