using System;
using System.Collections.Generic;
using System.Text;

namespace Ex003 {
    class Contato {
        string nome { get; }
        string telefone { get; }

        public Contato(string nome, string telefone) {
            this.nome = nome;
            this.telefone = telefone;
        }
        public Contato() { }


    }
}
