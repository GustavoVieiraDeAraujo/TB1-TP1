#include <stdexcept>
#include "testes_dominios.h"

// -----------------------------------------------------------
// Implementações do metodo "run" da classe de teste unitario.

int teste_unitario::run(){
    criar_teste();    
    testar_cenario_sucesso(); 
    testar_cenario_falha();
    destruir_teste(); 
    return estado;
}

// --------------------------------------------------
// Implementações dos metodos da classe teste_classe.

void teste_classe::criar_teste(){
    classe_teste = new classe();
    estado = SUCESSO;
}

void teste_classe::destruir_teste(){
    delete classe_teste;
    classe_teste = nullptr;
}

void teste_classe::testar_cenario_sucesso(){
    try{
        classe_teste->set_valor_dominio("INTEGRACAO");
        if (classe_teste->get_valor_dominio() != "INTEGRACAO")
            estado = FALHA;
    }catch (invalid_argument &excecao){
        estado = FALHA;
    }
}

void teste_classe::testar_cenario_falha(){
    try{
        classe_teste->set_valor_dominio("ERROOOOO");
        estado = FALHA;
    }catch (invalid_argument &excecao){
        if (classe_teste->get_valor_dominio() == "ERROOOOO")
            estado = FALHA;
    }
}

// --------------------------------------------------
// Implementações dos metodos da classe teste_codigo.

void teste_codigo::criar_teste(){
    codigo_teste = new codigo();
    estado = SUCESSO;
}

void teste_codigo::destruir_teste(){
    delete codigo_teste;
    codigo_teste = nullptr;
}

void teste_codigo::testar_cenario_sucesso(){
    try{
        codigo_teste->set_valor_dominio("ABC123");
        if (codigo_teste->get_valor_dominio() != "ABC123")
            estado = FALHA;
    }catch (invalid_argument &excecao){
        estado = FALHA;
    }
}

void teste_codigo::testar_cenario_falha(){
    try{
        codigo_teste->set_valor_dominio("ABCD12");
        estado = FALHA;
    }catch (invalid_argument &excecao){
        if (codigo_teste->get_valor_dominio() == "ABCD12")
            estado = FALHA;
    }
}

// ------------------------------------------------
// Implementações dos metodos da classe teste_data.

void teste_data::criar_teste(){
    data_teste = new data();
    estado = SUCESSO;
}

void teste_data::destruir_teste(){
    delete data_teste;
    data_teste = nullptr;
}

void teste_data::testar_cenario_sucesso(){
    try{
        data_teste->set_valor_dominio("01/JAN/2999");
        if (data_teste->get_valor_dominio() != "01/JAN/2999")
            estado = FALHA;
    }catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void teste_data::testar_cenario_falha(){
    try{
        data_teste->set_valor_dominio("32/dez/3000");
        estado = FALHA;
    }catch (invalid_argument &excecao){
        if (data_teste->get_valor_dominio() == "32/dez/3000")
            estado = FALHA;
    }
}

// -----------------------------------------------------
// Implementações dos metodos da classe teste_matricula.

void teste_matricula::criar_teste(){
    matricula_teste = new matricula();
    estado = SUCESSO;
}

void teste_matricula::destruir_teste(){
    delete matricula_teste;
    matricula_teste = nullptr;
}

void teste_matricula::testar_cenario_sucesso(){
    try{
        matricula_teste->set_valor_dominio("1234566");
        if (matricula_teste->get_valor_dominio() != "1234566")
            estado = FALHA;
    }catch (invalid_argument &excecao){
        estado = FALHA;
    }
}

void teste_matricula::testar_cenario_falha(){
    try{
        matricula_teste->set_valor_dominio("1234561");
        estado = FALHA;
    }catch (invalid_argument &excecao){
        if (matricula_teste->get_valor_dominio() == "1234561")
            estado = FALHA;
    }
}

// --------------------------------------------------------
// Implementações dos metodos da classe de teste_resultado.

void teste_resultado::criar_teste(){
    resultado_teste = new resultado();
    estado = SUCESSO;
}

void teste_resultado::destruir_teste(){
    delete resultado_teste;
    resultado_teste = nullptr;
}

void teste_resultado::testar_cenario_sucesso(){
    try{
        resultado_teste->set_valor_dominio("APROVADO");
        if (resultado_teste->get_valor_dominio() != "APROVADO")
            estado = FALHA;
    }catch (invalid_argument &excecao){
        estado = FALHA;
    }
}

void teste_resultado::testar_cenario_falha(){
    try{
        resultado_teste->set_valor_dominio("QUALQUERCOISA");
        estado = FALHA;
    }catch (invalid_argument &excecao){
        if (resultado_teste->get_valor_dominio() == "QUALQUERCOISA")
            estado = FALHA;
    }
}

// -------------------------------------------------
// Implementações dos metodos da classe teste_senha.

void teste_senha::criar_teste(){
    senha_teste = new senha();
    estado = SUCESSO;
}

void teste_senha::destruir_teste(){
    delete senha_teste;
    senha_teste = nullptr;
}

void teste_senha::testar_cenario_sucesso(){
    try{
        senha_teste->set_valor_dominio("AmO2@&");
        if (senha_teste->get_valor_dominio() != "AmO2@&")
            estado = FALHA;
    }catch (invalid_argument &excecao){
        estado = FALHA;
    }
}

void teste_senha::testar_cenario_falha(){
    try{
        senha_teste->set_valor_dominio("errooooooo");
        estado = FALHA;
    }catch (invalid_argument &excecao){
        if (senha_teste->get_valor_dominio() == "errooooooo")
            estado = FALHA;
    }
}

// ----------------------------------------------------
// Implementações dos metodos da classe teste_telefone.

void teste_telefone::criar_teste(){
    telefone_teste = new telefone();
    estado = SUCESSO;
}

void teste_telefone::destruir_teste(){
    delete telefone_teste;
    telefone_teste = nullptr;
}

void teste_telefone::testar_cenario_sucesso(){
    try{
        telefone_teste->set_valor_dominio("+1234567");
        if (telefone_teste->get_valor_dominio() != "+1234567")
            estado = FALHA;
    }catch (invalid_argument &excecao){
        estado = FALHA;
    }
}

void teste_telefone::testar_cenario_falha(){
    try{
        telefone_teste->set_valor_dominio("+1234567890123456");
        estado = FALHA;
    }catch (invalid_argument &excecao){
        if (telefone_teste->get_valor_dominio() == "+1234567890123456")
            estado = FALHA;
    }
}

// ----------------------------------------------------
// Implementações dos metodos da classe de teste_texto.

void teste_texto::criar_teste(){
    texto_teste = new texto();
    estado = SUCESSO;
}

void teste_texto::destruir_teste(){
    delete texto_teste;
    texto_teste = nullptr;
}

void teste_texto::testar_cenario_sucesso(){
    try{
        texto_teste->set_valor_dominio("texto para fins test");
        if (texto_teste->get_valor_dominio() != "texto para fins test")
            estado = FALHA;
    }catch (invalid_argument &excecao){
        estado = FALHA;
    }
}

void teste_texto::testar_cenario_falha(){
    try{
        texto_teste->set_valor_dominio("texto  errado");
        estado = FALHA;
    }catch (invalid_argument &excecao){
        if (texto_teste->get_valor_dominio() == "texto  errado")
            estado = FALHA;
    }
}