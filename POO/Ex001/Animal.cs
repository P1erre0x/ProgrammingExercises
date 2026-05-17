using System;
using System.Collections.Generic;
using System.Text;

namespace Ex001 {
    class Animal {
        public string Nome;
        public int Idade;
        public string Raca;
        public virtual void EmitirSom() {
            Console.WriteLine("O animal emitiu um som!");
        }
        public void Dormir() { }
        public void Acordar() { }
        public void Caminhar() { }
    }
}
