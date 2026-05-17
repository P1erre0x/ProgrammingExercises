using System;
using System.Collections.Generic;
using System.Text;

namespace Ex001 {
    class Peixe : Animal {

        public override void EmitirSom() {
            base.EmitirSom();
            Console.WriteLine("Glu glu glu glu");
        }
    }
}
