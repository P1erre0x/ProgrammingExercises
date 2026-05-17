using System;
using System.Collections.Generic;
using System.Text;

namespace Ex11 {
    public abstract class Funcionario {
        public string Nome;
        public int Idade;
        private float SalarioBase;


        public abstract float CalcularSalario();
    }
}
