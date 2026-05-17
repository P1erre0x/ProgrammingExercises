namespace Ex05 {
    class ContaBancaria {
        private float SaldoBancario;

        public int Saque(float valor) {
            if (valor > 0) {
                SaldoBancario -= valor;
                return 0;
            }
            return 1;
        }
    }
}
