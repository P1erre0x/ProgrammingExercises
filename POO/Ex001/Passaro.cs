using System;
using System.Collections.Generic;
using System.Text;

namespace Ex001 {
    class Passaro : Animal {
        public override void EmitirSom() {
            base.EmitirSom();
            Console.WriteLine("Piu piu piu");
        }
    }
}
