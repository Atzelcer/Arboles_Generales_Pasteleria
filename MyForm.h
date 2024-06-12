#pragma once

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
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;













	private: System::Windows::Forms::TextBox^ MOSTRAR_RECETA_COMPLETA;




	private: System::Windows::Forms::GroupBox^ groupBox3;



	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ DIFICULTAD_RECETA;



	private: System::Windows::Forms::TextBox^ GRASAS_RECETA;
	private: System::Windows::Forms::TextBox^ CARBOHIDRATOS_RECETA;


	private: System::Windows::Forms::TextBox^ PROTEINAS_RECETA;

	private: System::Windows::Forms::TextBox^ CALORIAS_RECETA;




	private: System::Windows::Forms::Button^ GUARDAR_RECETA;
	private: System::Windows::Forms::Label^ label12;



	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->DIFICULTAD_RECETA = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->MOSTRAR_RECETA_COMPLETA = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->CARBOHIDRATOS_RECETA = (gcnew System::Windows::Forms::TextBox());
			this->PROTEINAS_RECETA = (gcnew System::Windows::Forms::TextBox());
			this->CALORIAS_RECETA = (gcnew System::Windows::Forms::TextBox());
			this->GRASAS_RECETA = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->GUARDAR_RECETA = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 25.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label2->ForeColor = System::Drawing::Color::Azure;
			this->label2->Location = System::Drawing::Point(512, 10);
			this->label2->Margin = System::Windows::Forms::Padding(15);
			this->label2->Name = L"label2";
			this->label2->Padding = System::Windows::Forms::Padding(10);
			this->label2->Size = System::Drawing::Size(506, 72);
			this->label2->TabIndex = 1;
			this->label2->Text = L"|°|   PASTELERIA |°|";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->DIFICULTAD_RECETA);
			this->groupBox1->Controls->Add(this->MOSTRAR_RECETA_COMPLETA);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(35, 98);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(496, 464);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// DIFICULTAD_RECETA
			// 
			this->DIFICULTAD_RECETA->BackColor = System::Drawing::Color::OrangeRed;
			this->DIFICULTAD_RECETA->FormattingEnabled = true;
			this->DIFICULTAD_RECETA->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"PASTELES", L"TARTAS ", L"GALLETAS", L"ENTRE OTROS " });
			this->DIFICULTAD_RECETA->Location = System::Drawing::Point(157, 57);
			this->DIFICULTAD_RECETA->Name = L"DIFICULTAD_RECETA";
			this->DIFICULTAD_RECETA->Size = System::Drawing::Size(272, 24);
			this->DIFICULTAD_RECETA->TabIndex = 11;
			this->DIFICULTAD_RECETA->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::DIFICULTAD_RECETA_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Honeydew;
			this->label3->Location = System::Drawing::Point(28, 60);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"PRODUCTO : ";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Honeydew;
			this->label1->Location = System::Drawing::Point(15, 115);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(136, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"DATOS RECETA : ";
			// 
			// MOSTRAR_RECETA_COMPLETA
			// 
			this->MOSTRAR_RECETA_COMPLETA->BackColor = System::Drawing::Color::LightCyan;
			this->MOSTRAR_RECETA_COMPLETA->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->MOSTRAR_RECETA_COMPLETA->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->MOSTRAR_RECETA_COMPLETA->Location = System::Drawing::Point(126, 172);
			this->MOSTRAR_RECETA_COMPLETA->Multiline = true;
			this->MOSTRAR_RECETA_COMPLETA->Name = L"MOSTRAR_RECETA_COMPLETA";
			this->MOSTRAR_RECETA_COMPLETA->Size = System::Drawing::Size(305, 207);
			this->MOSTRAR_RECETA_COMPLETA->TabIndex = 5;
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::Transparent;
			this->groupBox3->Controls->Add(this->CARBOHIDRATOS_RECETA);
			this->groupBox3->Controls->Add(this->PROTEINAS_RECETA);
			this->groupBox3->Controls->Add(this->CALORIAS_RECETA);
			this->groupBox3->Controls->Add(this->GRASAS_RECETA);
			this->groupBox3->Controls->Add(this->label15);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label17);
			this->groupBox3->Location = System::Drawing::Point(634, 76);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(522, 528);
			this->groupBox3->TabIndex = 11;
			this->groupBox3->TabStop = false;
			this->groupBox3->Enter += gcnew System::EventHandler(this, &MyForm::groupBox3_Enter);
			// 
			// CARBOHIDRATOS_RECETA
			// 
			this->CARBOHIDRATOS_RECETA->BackColor = System::Drawing::Color::LightCyan;
			this->CARBOHIDRATOS_RECETA->Location = System::Drawing::Point(148, 422);
			this->CARBOHIDRATOS_RECETA->Name = L"CARBOHIDRATOS_RECETA";
			this->CARBOHIDRATOS_RECETA->Size = System::Drawing::Size(279, 22);
			this->CARBOHIDRATOS_RECETA->TabIndex = 20;
			this->CARBOHIDRATOS_RECETA->TextChanged += gcnew System::EventHandler(this, &MyForm::CARBOHIDRATOS_RECETA_TextChanged);
			// 
			// PROTEINAS_RECETA
			// 
			this->PROTEINAS_RECETA->BackColor = System::Drawing::Color::LightCyan;
			this->PROTEINAS_RECETA->Location = System::Drawing::Point(148, 290);
			this->PROTEINAS_RECETA->Name = L"PROTEINAS_RECETA";
			this->PROTEINAS_RECETA->Size = System::Drawing::Size(279, 22);
			this->PROTEINAS_RECETA->TabIndex = 19;
			// 
			// CALORIAS_RECETA
			// 
			this->CALORIAS_RECETA->BackColor = System::Drawing::Color::LightCyan;
			this->CALORIAS_RECETA->Location = System::Drawing::Point(148, 105);
			this->CALORIAS_RECETA->Name = L"CALORIAS_RECETA";
			this->CALORIAS_RECETA->Size = System::Drawing::Size(279, 22);
			this->CALORIAS_RECETA->TabIndex = 18;
			this->CALORIAS_RECETA->TextChanged += gcnew System::EventHandler(this, &MyForm::CALORIAS_RECETA_TextChanged);
			// 
			// GRASAS_RECETA
			// 
			this->GRASAS_RECETA->BackColor = System::Drawing::Color::LightCyan;
			this->GRASAS_RECETA->Location = System::Drawing::Point(148, 203);
			this->GRASAS_RECETA->Name = L"GRASAS_RECETA";
			this->GRASAS_RECETA->Size = System::Drawing::Size(279, 22);
			this->GRASAS_RECETA->TabIndex = 16;
			this->GRASAS_RECETA->TextChanged += gcnew System::EventHandler(this, &MyForm::GRASAS_RECETA_TextChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::MediumSeaGreen;
			this->label15->Location = System::Drawing::Point(40, 345);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(149, 16);
			this->label15->TabIndex = 11;
			this->label15->Text = L"CARBOHIDRATOS : ";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::MediumSeaGreen;
			this->label14->Location = System::Drawing::Point(40, 251);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(106, 16);
			this->label14->TabIndex = 10;
			this->label14->Text = L"PROTEINAS : ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::MediumSeaGreen;
			this->label10->Location = System::Drawing::Point(40, 164);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(81, 16);
			this->label10->TabIndex = 9;
			this->label10->Text = L"GRASAS : ";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::DarkSeaGreen;
			this->label8->Location = System::Drawing::Point(40, 84);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(93, 16);
			this->label8->TabIndex = 7;
			this->label8->Text = L"CALORIAS : ";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click_1);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::Lavender;
			this->label17->Location = System::Drawing::Point(108, 22);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(277, 32);
			this->label17->TabIndex = 6;
			this->label17->Text = L"NUEVA RECETA  : ";
			this->label17->Click += gcnew System::EventHandler(this, &MyForm::label17_Click);
			// 
			// GUARDAR_RECETA
			// 
			this->GUARDAR_RECETA->BackColor = System::Drawing::Color::RosyBrown;
			this->GUARDAR_RECETA->Font = (gcnew System::Drawing::Font(L"ROG Fonts", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GUARDAR_RECETA->Location = System::Drawing::Point(161, 594);
			this->GUARDAR_RECETA->Name = L"GUARDAR_RECETA";
			this->GUARDAR_RECETA->Size = System::Drawing::Size(195, 75);
			this->GUARDAR_RECETA->TabIndex = 12;
			this->GUARDAR_RECETA->Text = L"GUARDAR";
			this->GUARDAR_RECETA->UseVisualStyleBackColor = false;
			this->GUARDAR_RECETA->Click += gcnew System::EventHandler(this, &MyForm::GUARDAR_RECETA_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Honeydew;
			this->label12->Location = System::Drawing::Point(183, 43);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(201, 52);
			this->label12->TabIndex = 16;
			this->label12->Text = L"RECETA: ";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::Peru;
			this->ClientSize = System::Drawing::Size(1733, 756);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->GUARDAR_RECETA);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e)
	{
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e)
	{
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e)
	{
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{

	}
	private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e)
	{
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e)
	{
	}
	private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e)
	{
	}
	private: System::Void label8_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
	}
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e)
	{
	}
	private: System::Void textBox10_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
	}
	private: System::Void groupBox3_Enter(System::Object^ sender, System::EventArgs^ e)
	{
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
	}
	private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
	}
	private: System::Void bindingNavigator1_RefreshItems(System::Object^ sender, System::EventArgs^ e)
	{
	}

	private: System::Void GUARDAR_RECETA_Click(System::Object^ sender, System::EventArgs^ e) {

		// Actualizar la UI si es necesario, por ejemplo, limpiando campos o mostrando un mensaje
		MessageBox::Show("Receta guardada correctamente.");
	}

	private: System::Void Origen_Receta_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		//PARTE PARA INSERTAR EL ORIGEN DE LA RECETA

	}
	private: System::Void PORCIONES_RECETA_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
		//PARTE PARA ESCOGER EL TIPO DE PORCIONES DE LA RECETA
	}
	private: System::Void DIFICULTAD_RECETA_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
		MessageBox::Show("Dificultad seleccionada: " + DIFICULTAD_RECETA->SelectedItem->ToString());
	}
	private: System::Void CALORIAS_RECETA_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		//PARTE PARA INSERTAR LAS CALORIAS DE LA RECETA
			// Asegurarse de que solo se ingresen números
		if (System::Text::RegularExpressions::Regex::IsMatch(CALORIAS_RECETA->Text, "^[0-9]*$")) {
			// Puedes agregar lógica aquí si necesitas responder dinámicamente al cambio de calorías
		}
		else {
			MessageBox::Show("Ingrese solo números en el campo de calorías.");
			CALORIAS_RECETA->Text = ""; // Limpiar el campo si no es válido
		}
	}
	private: System::Void GRASAS_RECETA_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		//PARTE PARA INSERTAR LAS GRASAS DE LA RECETA

				// Validar que solo se ingresen números
		if (System::Text::RegularExpressions::Regex::IsMatch(GRASAS_RECETA->Text, "^[0-9]*\\.?[0-9]+$")) {
			// Permitir texto válido
		}
		else {
			MessageBox::Show("Por favor, ingrese solo valores numéricos para las grasas.");
			GRASAS_RECETA->Text = ""; // Limpiar el campo si no es válido
		}
	}
	private: System::Void CARBOHIDRATOS_RECETA_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		// PARTE PARA INSERTAR LOS CARBOHIDRATOS DE LA RECETA

		if (System::Text::RegularExpressions::Regex::IsMatch(CARBOHIDRATOS_RECETA->Text, "^[0-9]*\\.?[0-9]+$")) {
			// Permitir texto válido
		}
		else {
			MessageBox::Show("Por favor, ingrese solo valores numéricos para los carbohidratos.");
			CARBOHIDRATOS_RECETA->Text = ""; // Limpiar el campo si no es válido
		}
	}

	};

}