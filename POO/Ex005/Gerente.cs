using System;
using System.Collections.Generic;
using System.Text;

namespace Ex005 {
    class Gerente : Funcionario {
        public Gerente(float salario) : base(salario) { }

        public override double CalcularBonus() {
            double bonificacao = base.CalcularBonus();
            return bonificacao + (Salario * 0.10);

        }

        }
    }
