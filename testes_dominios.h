// Arquivo de implementação das classes de teste dos domínios.

#include "dominios.h"

// ----------------------------------
// Classe para fazer teste unitarios.

// Classe abstrata.
class teste_unitario
{
protected:
    int estado;                                // Estado do teste.
    virtual void setUp() = 0;                  // Metodo para criar unidade em teste.
    virtual void tearDown() = 0;               // Metodo para destruir unidade em teste.
    virtual void testarCenarioSucesso() = 0;   // Cenario de teste falha.
    virtual void testarCenarioFalha() = 0;     // Cenario de teste sucesso.
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
// Classe para testar o dominio classe.
class teste_classe : public teste_unitario
{
private:
    Classe *classe_teste;
    void setUp() override;
    void tearDown() override;
    void testarCenarioSucesso() override;
    void testarCenarioFalha() override;
};

// ------------------------------------
// Classe para testar o dominio codigo.
class teste_codigo : public teste_unitario
{
private:
    Codigo *codigo_teste;
    void setUp() override;
    void tearDown() override;
    void testarCenarioSucesso() override;
    void testarCenarioFalha() override;
};

// ----------------------------------
// Classe para testar o dominio data.
class teste_data : public teste_unitario
{
private:
    Data *data_teste;
    void setUp() override;
    void tearDown() override;
    void testarCenarioSucesso() override;
    void testarCenarioFalha() override;
};

// ---------------------------------------
// Classe para testar o dominio matricula.
class teste_matricula : public teste_unitario
{
private:
    Matricula *matricula_teste;
    void setUp() override;
    void tearDown() override;
    void testarCenarioSucesso() override;
    void testarCenarioFalha() override;
};

// ---------------------------------------
// Classe para testar o dominio resultado.
class teste_resultado : public teste_unitario
{
private:
    Resultado *resultado_teste;
    void setUp() override;
    void tearDown() override;
    void testarCenarioSucesso() override;
    void testarCenarioFalha() override;
};

// -----------------------------------
// Classe para testar o dominio senha.
class teste_senha : public teste_unitario
{
private:
    Senha *senha_teste;
    void setUp() override;
    void tearDown() override;
    void testarCenarioSucesso() override;
    void testarCenarioFalha() override;
};

// --------------------------------------
// Classe para testar o dominio telefone.
class teste_telefone : public teste_unitario
{
private:
    Telefone *telefone_teste;
    void setUp() override;
    void tearDown() override;
    void testarCenarioSucesso() override;
    void testarCenarioFalha() override;
};

// --------------------------------------
// Classe para testar o dominio telefone.
class teste_texto : public teste_unitario
{
private:
    Texto *texto_teste;
    void setUp() override;
    void tearDown() override;
    void testarCenarioSucesso() override;
    void testarCenarioFalha() override;
};
