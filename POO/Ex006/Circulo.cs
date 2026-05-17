using System;
using System.Collections.Generic;
using System.Text;

namespace Ex006 {
    class Circulo : Forma {
        public double raio;

        public override double CalcularArea() {
            return 3.14 * (raio * raio);
        }
    }
}
