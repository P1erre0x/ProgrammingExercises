namespace Ex001 {
    class Gato : Animal {

        public override void EmitirSom() {
            base.EmitirSom();
            Console.WriteLine("Miar miar miar");
        }
    }
}
