namespace Ex001 {
    class Cachorro : Animal {

        public override void EmitirSom() {
            base.EmitirSom();
            Console.WriteLine("Au au au au");
        }
    }
}
