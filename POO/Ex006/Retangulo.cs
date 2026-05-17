using System;
using System.Collections.Generic;
using System.Text;

namespace Ex006 {
    class Retangulo : Forma {
        public float lado;
        public float altura;

        public override double CalcularArea() {
            return lado * altura;
        }
    }
}
