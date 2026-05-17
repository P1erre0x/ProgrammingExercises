using System;
using System.Collections.Generic;
using System.Text;

namespace Ex005 {
    class Funcionario {
        public double Salario { get; }

        public Funcionario() { }

        public Funcionario(double salario) {
            Salario = salario;
        }

        public virtual double CalcularBonus() {
            return Salario * 0.1;
        }

    }
}
