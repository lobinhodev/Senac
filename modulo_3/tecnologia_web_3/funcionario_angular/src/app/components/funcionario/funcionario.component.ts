import { Component, Input, OnInit, Output } from '@angular/core';

@Component({
  selector: 'senac-funcionario',
  templateUrl: './funcionario.component.html',
  styleUrls: ['./funcionario.component.sass'],
})
export class FuncionarioComponent implements OnInit {
  // nome: string = 'Daniel Dantas';
  // isMasculino: boolean = true;

  @Input() nome!: string;
  @Input() sobreNome!: string;
  @Input() nomeComInput!: string;
  @Input() idade!: number;
  @Input() isMasculino!: boolean;

  @Output() nomeFuncionario!: string;

  isLogado: boolean = true;
  estados: string[] = ['Rio de Janeiro', 'São Paulo', 'Minas Gerais'];
  tiposPessoa = [
    { id: 1, descricao: 'carioca' },
    { id: 2, descricao: 'Paulista' },
  ];
  @Input() comboBox!: string;

  constructor() {}

  ngOnInit(): void {}
}
