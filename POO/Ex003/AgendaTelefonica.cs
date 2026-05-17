namespace Ex003 {
    class AgendaTelefonica {
        List<Contato> Contatos;

        public AgendaTelefonica() {
            Contatos = new List<Contato>();
        }

        public void AdicionarContatos(Contato contato) {
            Contatos.Add(contato);
        }
        public void AdicionarContato(string nome, string telefone) {

            List.add(new Contato(nome, telefone));
        }

    }
}
