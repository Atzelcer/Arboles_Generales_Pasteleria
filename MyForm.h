#pragma once
#include "pasteleria.h"

namespace ArbolesGeneralesPasteleria {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		Pasteleria^ pasteleria = gcnew Pasteleria();
		List<String^>^ ListaIngredientes = gcnew List<String^>();
		List<String^>^ ListaPasos = gcnew List<String^>();

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ListBox^ listRECETAS;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ GROUPproductos;
	private: System::Windows::Forms::GroupBox^ GROUPrecetas;
	private: System::Windows::Forms::Label^ labelNombre;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::NumericUpDown^ numericCANTIDAD;

	private: System::Windows::Forms::TextBox^ textPRECIO;

	private: System::Windows::Forms::TextBox^ textDESCRIPCION;

	private: System::Windows::Forms::TextBox^ textNOMBRE;

	private: System::Windows::Forms::Label^ labelcantidad;
	private: System::Windows::Forms::Label^ labelprecio;
	private: System::Windows::Forms::Label^ labelDescripcion;
	private: System::Windows::Forms::ListBox^ listINGREDIENTES;

	private: System::Windows::Forms::TextBox^ textPasos;
	private: System::Windows::Forms::TextBox^ textIngrediente;





	private: System::Windows::Forms::Label^ labelProceso;

	private: System::Windows::Forms::Label^ labelIngredientes;
	private: System::Windows::Forms::Label^ labelPasos;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textNpaso;


	private: System::Windows::Forms::Button^ del;
	private: System::Windows::Forms::Button^ buttonpasos;
	private: System::Windows::Forms::Button^ buttonguardarReceta;
	private: System::Windows::Forms::Button^ buttonIngrediente;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ labelreceta;
	private: System::Windows::Forms::Button^ buttonAddProducto;

	private: System::Windows::Forms::Button^ buttonDelProducto;




	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->GROUPproductos = (gcnew System::Windows::Forms::GroupBox());
			this->buttonDelProducto = (gcnew System::Windows::Forms::Button());
			this->buttonAddProducto = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->numericCANTIDAD = (gcnew System::Windows::Forms::NumericUpDown());
			this->textPRECIO = (gcnew System::Windows::Forms::TextBox());
			this->textDESCRIPCION = (gcnew System::Windows::Forms::TextBox());
			this->textNOMBRE = (gcnew System::Windows::Forms::TextBox());
			this->labelcantidad = (gcnew System::Windows::Forms::Label());
			this->labelprecio = (gcnew System::Windows::Forms::Label());
			this->labelDescripcion = (gcnew System::Windows::Forms::Label());
			this->labelNombre = (gcnew System::Windows::Forms::Label());
			this->GROUPrecetas = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->labelreceta = (gcnew System::Windows::Forms::Label());
			this->buttonguardarReceta = (gcnew System::Windows::Forms::Button());
			this->buttonIngrediente = (gcnew System::Windows::Forms::Button());
			this->labelPasos = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textNpaso = (gcnew System::Windows::Forms::TextBox());
			this->del = (gcnew System::Windows::Forms::Button());
			this->buttonpasos = (gcnew System::Windows::Forms::Button());
			this->listINGREDIENTES = (gcnew System::Windows::Forms::ListBox());
			this->textPasos = (gcnew System::Windows::Forms::TextBox());
			this->textIngrediente = (gcnew System::Windows::Forms::TextBox());
			this->labelProceso = (gcnew System::Windows::Forms::Label());
			this->labelIngredientes = (gcnew System::Windows::Forms::Label());
			this->listRECETAS = (gcnew System::Windows::Forms::ListBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->GROUPproductos->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericCANTIDAD))->BeginInit();
			this->GROUPrecetas->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::LavenderBlush;
			this->label1->Font = (gcnew System::Drawing::Font(L"Wide Latin", 48, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 57);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1089, 98);
			this->label1->TabIndex = 0;
			this->label1->Text = L"PASTELERIA";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Haettenschweiler", 22, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label2->Location = System::Drawing::Point(1181, 828);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(204, 40);
			this->label2->TabIndex = 1;
			this->label2->Text = L"ARBOL GENERAL";
			// 
			// GROUPproductos
			// 
			this->GROUPproductos->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->GROUPproductos->Controls->Add(this->buttonDelProducto);
			this->GROUPproductos->Controls->Add(this->buttonAddProducto);
			this->GROUPproductos->Controls->Add(this->listBox1);
			this->GROUPproductos->Controls->Add(this->numericCANTIDAD);
			this->GROUPproductos->Controls->Add(this->textPRECIO);
			this->GROUPproductos->Controls->Add(this->textDESCRIPCION);
			this->GROUPproductos->Controls->Add(this->textNOMBRE);
			this->GROUPproductos->Controls->Add(this->labelcantidad);
			this->GROUPproductos->Controls->Add(this->labelprecio);
			this->GROUPproductos->Controls->Add(this->labelDescripcion);
			this->GROUPproductos->Controls->Add(this->labelNombre);
			this->GROUPproductos->Location = System::Drawing::Point(63, 188);
			this->GROUPproductos->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->GROUPproductos->Name = L"GROUPproductos";
			this->GROUPproductos->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->GROUPproductos->Size = System::Drawing::Size(460, 604);
			this->GROUPproductos->TabIndex = 2;
			this->GROUPproductos->TabStop = false;
			this->GROUPproductos->Text = L"Productos";
			// 
			// buttonDelProducto
			// 
			this->buttonDelProducto->Location = System::Drawing::Point(49, 228);
			this->buttonDelProducto->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonDelProducto->Name = L"buttonDelProducto";
			this->buttonDelProducto->Size = System::Drawing::Size(81, 28);
			this->buttonDelProducto->TabIndex = 26;
			this->buttonDelProducto->Text = L"Delete";
			this->buttonDelProducto->UseVisualStyleBackColor = true;
			this->buttonDelProducto->Click += gcnew System::EventHandler(this, &MyForm::buttonDelProducto_Click);
			// 
			// buttonAddProducto
			// 
			this->buttonAddProducto->Location = System::Drawing::Point(325, 228);
			this->buttonAddProducto->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonAddProducto->Name = L"buttonAddProducto";
			this->buttonAddProducto->Size = System::Drawing::Size(81, 28);
			this->buttonAddProducto->TabIndex = 25;
			this->buttonAddProducto->Text = L"Add";
			this->buttonAddProducto->UseVisualStyleBackColor = true;
			this->buttonAddProducto->Click += gcnew System::EventHandler(this, &MyForm::buttonAddProducto_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(49, 284);
			this->listBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(356, 276);
			this->listBox1->TabIndex = 8;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// numericCANTIDAD
			// 
			this->numericCANTIDAD->Location = System::Drawing::Point(324, 158);
			this->numericCANTIDAD->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->numericCANTIDAD->Name = L"numericCANTIDAD";
			this->numericCANTIDAD->Size = System::Drawing::Size(71, 22);
			this->numericCANTIDAD->TabIndex = 7;
			// 
			// textPRECIO
			// 
			this->textPRECIO->Location = System::Drawing::Point(263, 114);
			this->textPRECIO->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textPRECIO->Name = L"textPRECIO";
			this->textPRECIO->Size = System::Drawing::Size(132, 22);
			this->textPRECIO->TabIndex = 6;
			this->textPRECIO->TextChanged += gcnew System::EventHandler(this, &MyForm::textPRECIO_TextChanged);
			// 
			// textDESCRIPCION
			// 
			this->textDESCRIPCION->Location = System::Drawing::Point(263, 81);
			this->textDESCRIPCION->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textDESCRIPCION->Name = L"textDESCRIPCION";
			this->textDESCRIPCION->Size = System::Drawing::Size(132, 22);
			this->textDESCRIPCION->TabIndex = 5;
			// 
			// textNOMBRE
			// 
			this->textNOMBRE->Location = System::Drawing::Point(263, 48);
			this->textNOMBRE->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textNOMBRE->Name = L"textNOMBRE";
			this->textNOMBRE->Size = System::Drawing::Size(132, 22);
			this->textNOMBRE->TabIndex = 4;
			// 
			// labelcantidad
			// 
			this->labelcantidad->AutoSize = true;
			this->labelcantidad->Location = System::Drawing::Point(45, 158);
			this->labelcantidad->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelcantidad->Name = L"labelcantidad";
			this->labelcantidad->Size = System::Drawing::Size(87, 16);
			this->labelcantidad->TabIndex = 3;
			this->labelcantidad->Text = L"CANT. DISP.:";
			// 
			// labelprecio
			// 
			this->labelprecio->AutoSize = true;
			this->labelprecio->Location = System::Drawing::Point(45, 118);
			this->labelprecio->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelprecio->Name = L"labelprecio";
			this->labelprecio->Size = System::Drawing::Size(63, 16);
			this->labelprecio->TabIndex = 2;
			this->labelprecio->Text = L"PRECIO: ";
			// 
			// labelDescripcion
			// 
			this->labelDescripcion->AutoSize = true;
			this->labelDescripcion->Location = System::Drawing::Point(45, 81);
			this->labelDescripcion->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelDescripcion->Name = L"labelDescripcion";
			this->labelDescripcion->Size = System::Drawing::Size(101, 16);
			this->labelDescripcion->TabIndex = 1;
			this->labelDescripcion->Text = L"DESCRIPCION:";
			// 
			// labelNombre
			// 
			this->labelNombre->AutoSize = true;
			this->labelNombre->Location = System::Drawing::Point(45, 48);
			this->labelNombre->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelNombre->Name = L"labelNombre";
			this->labelNombre->Size = System::Drawing::Size(72, 16);
			this->labelNombre->TabIndex = 0;
			this->labelNombre->Text = L"NOMBRE: ";
			// 
			// GROUPrecetas
			// 
			this->GROUPrecetas->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->GROUPrecetas->Controls->Add(this->textBox1);
			this->GROUPrecetas->Controls->Add(this->labelreceta);
			this->GROUPrecetas->Controls->Add(this->buttonguardarReceta);
			this->GROUPrecetas->Controls->Add(this->buttonIngrediente);
			this->GROUPrecetas->Controls->Add(this->labelPasos);
			this->GROUPrecetas->Controls->Add(this->label3);
			this->GROUPrecetas->Controls->Add(this->textNpaso);
			this->GROUPrecetas->Controls->Add(this->del);
			this->GROUPrecetas->Controls->Add(this->buttonpasos);
			this->GROUPrecetas->Controls->Add(this->listINGREDIENTES);
			this->GROUPrecetas->Controls->Add(this->textPasos);
			this->GROUPrecetas->Controls->Add(this->textIngrediente);
			this->GROUPrecetas->Controls->Add(this->labelProceso);
			this->GROUPrecetas->Controls->Add(this->labelIngredientes);
			this->GROUPrecetas->Location = System::Drawing::Point(975, 159);
			this->GROUPrecetas->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->GROUPrecetas->Name = L"GROUPrecetas";
			this->GROUPrecetas->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->GROUPrecetas->Size = System::Drawing::Size(431, 604);
			this->GROUPrecetas->TabIndex = 3;
			this->GROUPrecetas->TabStop = false;
			this->GROUPrecetas->Text = L"Recetas";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(252, 14);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(132, 22);
			this->textBox1->TabIndex = 24;
			// 
			// labelreceta
			// 
			this->labelreceta->AutoSize = true;
			this->labelreceta->Location = System::Drawing::Point(35, 20);
			this->labelreceta->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelreceta->Name = L"labelreceta";
			this->labelreceta->Size = System::Drawing::Size(65, 16);
			this->labelreceta->TabIndex = 23;
			this->labelreceta->Text = L"RECETA:";
			this->labelreceta->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// buttonguardarReceta
			// 
			this->buttonguardarReceta->Location = System::Drawing::Point(148, 565);
			this->buttonguardarReceta->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonguardarReceta->Name = L"buttonguardarReceta";
			this->buttonguardarReceta->Size = System::Drawing::Size(121, 28);
			this->buttonguardarReceta->TabIndex = 22;
			this->buttonguardarReceta->Text = L"GUARDAR";
			this->buttonguardarReceta->UseVisualStyleBackColor = true;
			this->buttonguardarReceta->Click += gcnew System::EventHandler(this, &MyForm::buttonguardarReceta_Click);
			// 
			// buttonIngrediente
			// 
			this->buttonIngrediente->Location = System::Drawing::Point(304, 79);
			this->buttonIngrediente->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonIngrediente->Name = L"buttonIngrediente";
			this->buttonIngrediente->Size = System::Drawing::Size(81, 28);
			this->buttonIngrediente->TabIndex = 21;
			this->buttonIngrediente->Text = L"add";
			this->buttonIngrediente->UseVisualStyleBackColor = true;
			this->buttonIngrediente->Click += gcnew System::EventHandler(this, &MyForm::buttonIngrediente_Click);
			// 
			// labelPasos
			// 
			this->labelPasos->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->labelPasos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelPasos->Location = System::Drawing::Point(39, 327);
			this->labelPasos->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPasos->Name = L"labelPasos";
			this->labelPasos->Size = System::Drawing::Size(347, 230);
			this->labelPasos->TabIndex = 16;
			this->labelPasos->Click += gcnew System::EventHandler(this, &MyForm::labelPasos_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(163, 304);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 16);
			this->label3->TabIndex = 20;
			this->label3->Text = L"PASO N:";
			// 
			// textNpaso
			// 
			this->textNpaso->Location = System::Drawing::Point(237, 295);
			this->textNpaso->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textNpaso->MaximumSize = System::Drawing::Size(399, 300);
			this->textNpaso->Name = L"textNpaso";
			this->textNpaso->Size = System::Drawing::Size(55, 22);
			this->textNpaso->TabIndex = 19;
			// 
			// del
			// 
			this->del->Location = System::Drawing::Point(304, 295);
			this->del->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->del->Name = L"del";
			this->del->Size = System::Drawing::Size(81, 28);
			this->del->TabIndex = 18;
			this->del->Text = L"Delete";
			this->del->UseVisualStyleBackColor = true;
			this->del->Click += gcnew System::EventHandler(this, &MyForm::del_Click);
			// 
			// buttonpasos
			// 
			this->buttonpasos->Location = System::Drawing::Point(304, 260);
			this->buttonpasos->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonpasos->Name = L"buttonpasos";
			this->buttonpasos->Size = System::Drawing::Size(81, 28);
			this->buttonpasos->TabIndex = 17;
			this->buttonpasos->Text = L"add";
			this->buttonpasos->UseVisualStyleBackColor = true;
			this->buttonpasos->Click += gcnew System::EventHandler(this, &MyForm::buttonpasos_Click);
			// 
			// listINGREDIENTES
			// 
			this->listINGREDIENTES->FormattingEnabled = true;
			this->listINGREDIENTES->ItemHeight = 16;
			this->listINGREDIENTES->Location = System::Drawing::Point(252, 114);
			this->listINGREDIENTES->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->listINGREDIENTES->Name = L"listINGREDIENTES";
			this->listINGREDIENTES->Size = System::Drawing::Size(132, 100);
			this->listINGREDIENTES->TabIndex = 15;
			this->listINGREDIENTES->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox2_SelectedIndexChanged);
			// 
			// textPasos
			// 
			this->textPasos->Location = System::Drawing::Point(129, 228);
			this->textPasos->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textPasos->MaximumSize = System::Drawing::Size(399, 300);
			this->textPasos->Name = L"textPasos";
			this->textPasos->Size = System::Drawing::Size(255, 22);
			this->textPasos->TabIndex = 13;
			// 
			// textIngrediente
			// 
			this->textIngrediente->Location = System::Drawing::Point(252, 46);
			this->textIngrediente->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textIngrediente->Name = L"textIngrediente";
			this->textIngrediente->Size = System::Drawing::Size(132, 22);
			this->textIngrediente->TabIndex = 12;
			// 
			// labelProceso
			// 
			this->labelProceso->AutoSize = true;
			this->labelProceso->Location = System::Drawing::Point(39, 228);
			this->labelProceso->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelProceso->Name = L"labelProceso";
			this->labelProceso->Size = System::Drawing::Size(76, 16);
			this->labelProceso->TabIndex = 4;
			this->labelProceso->Text = L"PROCESO:";
			// 
			// labelIngredientes
			// 
			this->labelIngredientes->AutoSize = true;
			this->labelIngredientes->Location = System::Drawing::Point(35, 52);
			this->labelIngredientes->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelIngredientes->Name = L"labelIngredientes";
			this->labelIngredientes->Size = System::Drawing::Size(111, 16);
			this->labelIngredientes->TabIndex = 5;
			this->labelIngredientes->Text = L"INGREDIENTES:";
			// 
			// listRECETAS
			// 
			this->listRECETAS->FormattingEnabled = true;
			this->listRECETAS->ItemHeight = 16;
			this->listRECETAS->Location = System::Drawing::Point(590, 269);
			this->listRECETAS->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->listRECETAS->Name = L"listRECETAS";
			this->listRECETAS->Size = System::Drawing::Size(317, 420);
			this->listRECETAS->TabIndex = 27;
			this->listRECETAS->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listRECETAS_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Wheat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Permanent Marker", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(604, 225);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(288, 40);
			this->label4->TabIndex = 25;
			this->label4->Text = L"TIPOS DE RECETAS:";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1419, 879);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->listRECETAS);
			this->Controls->Add(this->GROUPrecetas);
			this->Controls->Add(this->GROUPproductos);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->GROUPproductos->ResumeLayout(false);
			this->GROUPproductos->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericCANTIDAD))->EndInit();
			this->GROUPrecetas->ResumeLayout(false);
			this->GROUPrecetas->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonpasos_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textNOMBRE->Text && textPasos->Text) {
			Producto^ prod = pasteleria->BuscarProducto(textNOMBRE->Text);
			if (prod) {
				ListaPasos->Add(textPasos->Text);
				int i = 0;
				labelPasos->Text = "";
				while (ListaPasos->Count > i) {
					labelPasos->Text += ListaPasos[i] + "\n";
					i++;
				}
			}
			prod->mostrarRecetas(listRECETAS);
		}
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonIngrediente_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textNOMBRE->Text && textIngrediente->Text) {
			Producto^ prod = pasteleria->BuscarProducto(textNOMBRE->Text);
			if (prod) {
				//Receta^ rec = prod->BuscarReceta(textBox1->Text);
				//if (rec) {
				//	//prod->AgregarIngrediente(rec, textIngrediente->Text);
				//	
				//}


				ListaIngredientes->Add(textIngrediente->Text);
				int i = 0;
				listINGREDIENTES->Items->Clear();
				while (ListaIngredientes->Count > i) {
					listINGREDIENTES->Items->Add(ListaIngredientes[i]);
					i++;
				}
			}
			prod->mostrarRecetas(listRECETAS);
		}
	}
	private: System::Void buttonAddProducto_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!textNOMBRE || !textDESCRIPCION || !textPRECIO) {
			MessageBox::Show("Faltan datos");
		}
		if (textNOMBRE->Text && textDESCRIPCION->Text && textPRECIO->Text && numericCANTIDAD->Text) {
			Producto^ nuevo = gcnew Producto();
			nuevo->Nombre = textNOMBRE->Text;
			nuevo->Descripcion = textDESCRIPCION->Text;
			nuevo->precio = Convert::ToInt32(textPRECIO->Text);
			nuevo->cantDisp = Convert::ToInt32(numericCANTIDAD->Text);
			if (nuevo) {
				pasteleria->AgregarProducto(nuevo);
			}
			else {
				MessageBox::Show("Producto ya existe");
			}
			listBox1->Items->Clear();
			pasteleria->mostrarProductos(listBox1);
		}

		//limpiar los entry
		textNOMBRE->Text = "";
		textDESCRIPCION->Text = "";
		textPRECIO->Text = "";
		numericCANTIDAD->Text = "";
		textBox1->Text = "";
		textIngrediente->Text = "";
		textPasos->Text = "";
		textNpaso->Text = "";
		listRECETAS->Items->Clear();
	}
	private: System::Void textPRECIO_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		if (listBox1->SelectedIndex != -1) {
			Producto^ prod = pasteleria->BuscarProducto(listBox1->SelectedItem->ToString());
			if (prod) {
				textNOMBRE->Text = prod->Nombre;
				textDESCRIPCION->Text = prod->Descripcion;
				textPRECIO->Text = Convert::ToString(prod->precio);
				numericCANTIDAD->Text = Convert::ToString(prod->cantDisp);
				prod->mostrarRecetas(listRECETAS);
			}
		}
	}
	private: System::Void buttonDelProducto_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textNOMBRE->Text) {
			Producto^ prod = pasteleria->BuscarProducto(textNOMBRE->Text);
			if (prod) {
				pasteleria->EliminarProducto(prod);
			}
		}
		listBox1->Items->Clear();
		pasteleria->mostrarProductos(listBox1);
	}
	private: System::Void del_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textNOMBRE->Text && textPasos->Text) {
			Producto^ prod = pasteleria->BuscarProducto(textNOMBRE->Text);
			if (prod) {
				int numeropaso = Convert::ToInt32(textNpaso->Text);
				ListaPasos->RemoveAt(numeropaso - 1);
				int i = 0;
				labelPasos->Text = "";
				while (ListaPasos->Count > i) {
					labelPasos->Text += ListaPasos[i] + "\n";
					i++;
				}
			}
			//prod->mostrarRecetas(listBox1, labelPasos);
		}
	}
	private: System::Void labelPasos_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonguardarReceta_Click(System::Object^ sender, System::EventArgs^ e) {
		Receta^ nuevaReceta = gcnew Receta();
		nuevaReceta->nombre = textBox1->Text;
		nuevaReceta->pasos = ListaPasos;
		nuevaReceta->ingredientes = ListaIngredientes;
		if (nuevaReceta) {
			Producto^ prod = pasteleria->BuscarProducto(textNOMBRE->Text);
			if (prod) {
				prod->AgregarReceta(nuevaReceta);
				prod->mostrarRecetas(listRECETAS);

			}
			else {
				MessageBox::Show("Producto no existe");
			}
		}
		textBox1->Text = "";
		textIngrediente->Text = "";
		textPasos->Text = "";
		textNpaso->Text = "";
		listINGREDIENTES->Items->Clear();
		labelPasos->Text = "";

	}
	private: System::Void listRECETAS_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		//mostrar los datos de la receta
		if (listRECETAS->SelectedIndex != -1) {
			Producto^ prod = pasteleria->BuscarProducto(textNOMBRE->Text);
			if (prod) {
				Receta^ rec = prod->BuscarReceta(listRECETAS->SelectedItem->ToString());
				if (rec) {
					textBox1->Text = rec->nombre;
					ListaIngredientes = rec->ingredientes;
					ListaPasos = rec->pasos;
					int i = 0;
					listINGREDIENTES->Items->Clear();
					while (ListaIngredientes->Count > i) {
						listINGREDIENTES->Items->Add(ListaIngredientes[i]);
						i++;
					}
					i = 0;
					labelPasos->Text = "";
					while (ListaPasos->Count > i) {
						labelPasos->Text += ListaPasos[i] + "\n";
						i++;
					}
				}
			}
		}
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
