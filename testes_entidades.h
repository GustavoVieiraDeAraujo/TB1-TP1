// Arquivo de implementação das classes de teste das entidades.
#include "entidades.h"

// ----------------------------------
// Classe para fazer teste unitarios.
// Classe abstrata.
class TesteUnitario
{
protected:
    int estado;                              // Estado do teste.
    virtual void setUp() = 0;                // Metodo para criar unidade em teste.
    virtual void tearDown() = 0;             // Metodo para destruir unidade em teste.
    //virtual void testarCenarioSucesso() = 0; // Cenario de teste falha.
    //virtual void testarCenarioFalha() = 0;   // Cenario de teste sucesso.
public:
    int run();                    // Metodo para executar teste.
    const static int SUCESSO = 1; // Definicao de constante para reportar resultado de teste.
    const static int FALHA = -1;  // Definicao de constante para reportar resultado de teste.
};

// ------------------------------------
// Classe para testar a entidade Desenvolvedor.
class TesteDesenvolvedor : public TesteUnitario
{
private:
    Desenvolvedor *desenvolvedor_teste;
    void setUp() override;
    void tearDown() override;
    //void testarCenarioSucesso() override;
    //void testarCenarioFalha() override;
};

// ------------------------------------
// Classe para testar a entidade Teste.
class TesteTeste : public TesteUnitario
{
private:
    Teste *teste_teste;
    void setUp() override;
    void tearDown() override;
    //void testarCenarioSucesso() override;
    //void testarCenarioFalha() override;
};

// ------------------------------------
// Classe para testar a entidade CasoDeTeste.
class TesteCasoDeTeste : public TesteUnitario
{
private:
    CasoDeTeste *teste_caso_de_teste;
    void setUp() override;
    void tearDown() override;
    //void testarCenarioSucesso() override;
    //void testarCenarioFalha() override;
};