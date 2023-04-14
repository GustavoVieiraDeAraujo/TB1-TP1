#include <string>

using namespace std;

// ----------------
// Classe dominio.
// Classe abstrata.

class dominio {
    protected:
        string valor_dominio;
        virtual void validar_dominio(string)=0;
    public:
        void set_valor_dominio(string);
        string get_valor_dominio() const;
};

inline string dominio::get_valor_dominio() const{
    return valor_dominio;
}

// --------------
// Classe classe. 

/// Regras de formatação:
///
/// Só pode possuir os seguintes valores: UNIDADE, INTEGRACAO, FUMACA, SISTEMA, REGRESSAO, ACEITACAO.

class classe:public dominio{
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

class codigo:public dominio{
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

class data:public dominio{
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

class matricula:public dominio{
    private:
        bool calculo_modulo_10(string);
        void validar_dominio(string) override;
};

// -----------------
// Classe resultado.

/// Regras de formatação:
///
/// Só pode possuir os seguintes valores: APROVADO e REPROVADO;

class resultado:public dominio{
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

class senha:public dominio{
    private:
        void validar_dominio(string) override;
};

// ----------------
// Classe telefone.

/// Regras de formatação:
///
/// - X é dígito (0 - 9);
/// - Formato +XXXXXXX (7 dígitos) a +XXXXXXXXXXXXXXX (15 dígitos);

class telefone:public dominio{
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

class texto:public dominio{
    private:
        void validar_dominio(string) override; 
};