// Arquivo de implementação das classes de teste dos domínios.

#include "dominios.h"

// ----------------------------------
// Classe para fazer teste unitarios.

// Classe abstrata.
class teste_unitario
{
protected:
    int estado;                                // Estado do teste.
    virtual void criar_teste() = 0;            // Metodo para criar unidade em teste.
    virtual void destruir_teste() = 0;         // Metodo para destruir unidade em teste.
    virtual void testar_cenario_falha() = 0;   // Cenario de teste falha.
    virtual void testar_cenario_sucesso() = 0; // Cenario de teste sucesso.
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
    void criar_teste() override;
    void destruir_teste() override;
    void testar_cenario_sucesso() override;
    void testar_cenario_falha() override;
};

// ------------------------------------
// Classe para testar o dominio codigo.
class teste_codigo : public teste_unitario
{
private:
    Codigo *codigo_teste;
    void criar_teste() override;
    void destruir_teste() override;
    void testar_cenario_sucesso() override;
    void testar_cenario_falha() override;
};

// ----------------------------------
// Classe para testar o dominio data.
class teste_data : public teste_unitario
{
private:
    Data *data_teste;
    void criar_teste() override;
    void destruir_teste() override;
    void testar_cenario_sucesso() override;
    void testar_cenario_falha() override;
};

// ---------------------------------------
// Classe para testar o dominio matricula.
class teste_matricula : public teste_unitario
{
private:
    Matricula *matricula_teste;
    void criar_teste() override;
    void destruir_teste() override;
    void testar_cenario_sucesso() override;
    void testar_cenario_falha() override;
};

// ---------------------------------------
// Classe para testar o dominio resultado.
class teste_resultado : public teste_unitario
{
private:
    Resultado *resultado_teste;
    void criar_teste() override;
    void destruir_teste() override;
    void testar_cenario_sucesso() override;
    void testar_cenario_falha() override;
};

// -----------------------------------
// Classe para testar o dominio senha.
class teste_senha : public teste_unitario
{
private:
    Senha *senha_teste;
    void criar_teste() override;
    void destruir_teste() override;
    void testar_cenario_sucesso() override;
    void testar_cenario_falha() override;
};

// --------------------------------------
// Classe para testar o dominio telefone.
class teste_telefone : public teste_unitario
{
private:
    Telefone *telefone_teste;
    void criar_teste() override;
    void destruir_teste() override;
    void testar_cenario_sucesso() override;
    void testar_cenario_falha() override;
};

// --------------------------------------
// Classe para testar o dominio telefone.
class teste_texto : public teste_unitario
{
private:
    Texto *texto_teste;
    void criar_teste() override;
    void destruir_teste() override;
    void testar_cenario_sucesso() override;
    void testar_cenario_falha() override;
};
