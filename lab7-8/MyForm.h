#pragma once
#include <string>
#include "Expression.h"

namespace Project2 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Ñâîäêà äëÿ MyForm
    /// </summary>
    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
            //
            //TODO: äîáàâüòå êîä êîíñòðóêòîðà
            //
        }

    protected:
        /// <summary>
        /// Îñâîáîäèòü âñå èñïîëüçóåìûå ðåñóðñû.
        /// </summary>
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Label^ label1;
    protected:
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label_head;
    private: System::Windows::Forms::Label^ label1_n;
    private: System::Windows::Forms::Label^ label1_m;
    private: System::Windows::Forms::Label^ label1_k;
    private: System::Windows::Forms::Label^ label2_n;
    private: System::Windows::Forms::Label^ label2_m;
    private: System::Windows::Forms::Label^ label2_k;
    private: System::Windows::Forms::TextBox^ textBox1_n;
    private: System::Windows::Forms::TextBox^ textBox1_m;
    private: System::Windows::Forms::TextBox^ textBox1_k;
    private: System::Windows::Forms::TextBox^ textBox2_k;
    private: System::Windows::Forms::TextBox^ textBox2_m;
    private: System::Windows::Forms::TextBox^ textBox2_n;
    private: System::Windows::Forms::Button^ button_calculate;
    private: System::Windows::Forms::Button^ button_clear;
    private: System::Windows::Forms::Label^ label1_res;
    private: System::Windows::Forms::Label^ label2_res;
    private: System::Windows::Forms::Label^ label_res;
    private: System::Windows::Forms::Label^ label_bober;











    protected:

    private:
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        System::ComponentModel::Container^ components;

        
#pragma region Windows Form Designer generated code
            /// <summary>
            /// Требуемый метод для поддержки конструктора — не изменяйте 
            /// содержимое этого метода с помощью редактора кода.
            /// </summary>
            void InitializeComponent(void)
        {
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label_head = (gcnew System::Windows::Forms::Label());
            this->label1_n = (gcnew System::Windows::Forms::Label());
            this->label1_m = (gcnew System::Windows::Forms::Label());
            this->label1_k = (gcnew System::Windows::Forms::Label());
            
            this->label2_n = (gcnew System::Windows::Forms::Label());
            this->label2_m = (gcnew System::Windows::Forms::Label());
            this->label2_k = (gcnew System::Windows::Forms::Label());
            this->textBox1_n = (gcnew System::Windows::Forms::TextBox());
            this->textBox1_m = (gcnew System::Windows::Forms::TextBox());
            this->textBox1_k = (gcnew System::Windows::Forms::TextBox());
            this->textBox2_k = (gcnew System::Windows::Forms::TextBox());
            this->textBox2_m = (gcnew System::Windows::Forms::TextBox());
            this->textBox2_n = (gcnew System::Windows::Forms::TextBox());
            this->button_calculate = (gcnew System::Windows::Forms::Button());
            this->button_clear = (gcnew System::Windows::Forms::Button());
            this->label1_res = (gcnew System::Windows::Forms::Label());
            this->label2_res = (gcnew System::Windows::Forms::Label());
            this->label_res = (gcnew System::Windows::Forms::Label());
            this->label_bober = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label1->Location = System::Drawing::Point(102, 77);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(157, 26);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Перший вираз:";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label2->Location = System::Drawing::Point(382, 77);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(150, 26);
            this->label2->TabIndex = 1;
            this->label2->Text = L"Другий вираз:";
            // 
            // label_head
            // 
            this->label_head->AutoSize = true;
            this->label_head->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label_head->Location = System::Drawing::Point(102, 26);
            this->label_head->Name = L"label_head";
            this->label_head->Size = System::Drawing::Size(408, 26);
            this->label_head->TabIndex = 2;
            this->label_head->Text = L"Загальний вид: arctg^2(x+1)-n/(n-m)\r\n";
            // 
            // label1_n
            // 
            this->label1_n->AutoSize = true;
            this->label1_n->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label1_n->Location = System::Drawing::Point(51, 126);
            this->label1_n->Name = L"label1_n";
            this->label1_n->Size = System::Drawing::Size(43, 26);
            this->label1_n->TabIndex = 3;
            this->label1_n->Text = L"x =";
            // 
            // label1_m

            
                // 
                this->label1_m->AutoSize = true;
            this->label1_m->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label1_m->Location = System::Drawing::Point(51, 180);
            this->label1_m->Name = L"label1_m";
            this->label1_m->Size = System::Drawing::Size(49, 26);
            this->label1_m->TabIndex = 4;
            this->label1_m->Text = L"n =";
            // 
            // label1_k
            // 
            this->label1_k->AutoSize = true;
            this->label1_k->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label1_k->Location = System::Drawing::Point(51, 239);
            this->label1_k->Name = L"label1_k";
            this->label1_k->Size = System::Drawing::Size(43, 26);
            this->label1_k->TabIndex = 5;
            this->label1_k->Text = L"m =";
            // 
            // label1_p
            // 
           
            // 
            // label2_n
            // 
            this->label2_n->AutoSize = true;
            this->label2_n->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label2_n->Location = System::Drawing::Point(338, 126);
            this->label2_n->Name = L"label2_n";
            this->label2_n->Size = System::Drawing::Size(43, 26);
            this->label2_n->TabIndex = 8;
            this->label2_n->Text = L"x =";
            // 
            // label2_m
            // 
            this->label2_m->AutoSize = true;
            this->label2_m->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label2_m->Location = System::Drawing::Point(338, 180);
            this->label2_m->Name = L"label2_m";
            this->label2_m->Size = System::Drawing::Size(49, 26);
            this->label2_m->TabIndex = 9;
            this->label2_m->Text = L"n =";
            // 
            // label2_k
            // 
            this->label2_k->AutoSize = true;
            this->label2_k->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label2_k->Location = System::Drawing::Point(338, 239);
            this->label2_k->Name = L"label2_k";
            this->label2_k->Size = System::Drawing::Size(43, 26);
            this->label2_k->TabIndex = 10;
            this->label2_k->Text = L"m =";
            // 
            // 
            // textBox1_n
            // 
            this->textBox1_n->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox1_n->Location = System::Drawing::Point(107, 126);
            this->textBox1_n->Name = L"textBox1_n";
            this->textBox1_n->RightToLeft = System::Windows::Forms::RightToLeft::No;

            
                this->textBox1_n->Size = System::Drawing::Size(156, 30);
            this->textBox1_n->TabIndex = 12;
            // 
            // textBox1_m
            // 
            this->textBox1_m->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox1_m->Location = System::Drawing::Point(107, 180);
            this->textBox1_m->Name = L"textBox1_m";
            this->textBox1_m->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->textBox1_m->Size = System::Drawing::Size(156, 30);
            this->textBox1_m->TabIndex = 13;
            // 
            // textBox1_k
            // 
            this->textBox1_k->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox1_k->Location = System::Drawing::Point(107, 239);
            this->textBox1_k->Name = L"textBox1_k";
            this->textBox1_k->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->textBox1_k->Size = System::Drawing::Size(156, 30);
            this->textBox1_k->TabIndex = 14;
            // 
            // textBox1_p
            // 
            // textBox2_k
            // 
            this->textBox2_k->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox2_k->Location = System::Drawing::Point(387, 239);
            this->textBox2_k->Name = L"textBox2_k";
            this->textBox2_k->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->textBox2_k->Size = System::Drawing::Size(152, 30);
            this->textBox2_k->TabIndex = 18;
            // 
            // textBox2_m
            // 
            this->textBox2_m->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox2_m->Location = System::Drawing::Point(387, 180);
            this->textBox2_m->Name = L"textBox2_m";
            this->textBox2_m->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->textBox2_m->Size = System::Drawing::Size(152, 30);
            this->textBox2_m->TabIndex = 17;
            // 
            // textBox2_n
            // 
            this->textBox2_n->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox2_n->Location = System::Drawing::Point(387, 126);
            this->textBox2_n->Name = L"textBox2_n";
            this->textBox2_n->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->textBox2_n->Size = System::Drawing::Size(152, 30);
            this->textBox2_n->TabIndex = 16;
            // 
            // button_calculate
            // 
            this->button_calculate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,

                
                static_cast<System::Byte>(204)));
            this->button_calculate->Location = System::Drawing::Point(69, 577);
            this->button_calculate->Name = L"button_calculate";
            this->button_calculate->Size = System::Drawing::Size(194, 76);
            this->button_calculate->TabIndex = 20;
            this->button_calculate->Text = L"Обрахувати вирази";
            this->button_calculate->UseVisualStyleBackColor = true;
            this->button_calculate->Click += gcnew System::EventHandler(this, &MyForm::button_calculate_Click);
            // 
            // button_clear
            // 
            this->button_clear->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button_clear->Location = System::Drawing::Point(346, 577);
            this->button_clear->Name = L"button_clear";
            this->button_clear->Size = System::Drawing::Size(193, 76);
            this->button_clear->TabIndex = 21;
            this->button_clear->Text = L"Очистити поля вводу";
            this->button_clear->UseVisualStyleBackColor = true;
            this->button_clear->Click += gcnew System::EventHandler(this, &MyForm::button_clear_Click);
            // 
            // label1_res
            // 
            this->label1_res->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label1_res->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label1_res->Location = System::Drawing::Point(69, 392);
            this->label1_res->Name = L"label1_res";
            this->label1_res->Size = System::Drawing::Size(204, 29);
            this->label1_res->TabIndex = 22;
            // 
            // label2_res
            // 
            this->label2_res->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label2_res->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label2_res->Location = System::Drawing::Point(334, 392);
            this->label2_res->Name = L"label2_res";
            this->label2_res->Size = System::Drawing::Size(205, 29);
            this->label2_res->TabIndex = 23;
            // 
            // label_res
            // 
            this->label_res->AutoSize = true;
            this->label_res->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label_res->Location = System::Drawing::Point(241, 352);
            this->label_res->Name = L"label_res";
            this->label_res->Size = System::Drawing::Size(121, 26);
            this->label_res->TabIndex = 24;
            this->label_res->Text = L"Результати:";
            // 
            // label_bober
            // 
            this->label_bober->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->label_bober->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label_bober->Location = System::Drawing::Point(69, 475);
            this->label_bober->Name = L"label_bober";
            this->label_bober->Size = System::Drawing::Size(470, 66);
            this->label_bober->TabIndex = 25;
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;

            
                this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(171)),
                    static_cast<System::Int32>(static_cast<System::Byte>(230)));
            this->ClientSize = System::Drawing::Size(612, 702);
            this->Controls->Add(this->label_bober);
            this->Controls->Add(this->label_res);
            this->Controls->Add(this->label2_res);
            this->Controls->Add(this->label1_res);
            this->Controls->Add(this->button_clear);
            this->Controls->Add(this->button_calculate);
            this->Controls->Add(this->textBox2_k);
            this->Controls->Add(this->textBox2_m);
            this->Controls->Add(this->textBox2_n);
            this->Controls->Add(this->textBox1_k);
            this->Controls->Add(this->textBox1_m);
            this->Controls->Add(this->textBox1_n);
            this->Controls->Add(this->label2_k);
            this->Controls->Add(this->label2_m);
            this->Controls->Add(this->label2_n);
            this->Controls->Add(this->label1_k);
            this->Controls->Add(this->label1_m);
            this->Controls->Add(this->label1_n);
            this->Controls->Add(this->label_head);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Name = L"MyForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"MyForm";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private: bool IsTextBoxInteger(TextBox^ textBox) {
        int result;
        return Int32::TryParse(textBox->Text, result);
    }

    private: bool IsTextBoxEmpty(TextBox^ textBox) {
        return textBox->Text->Trim() == "";
    }

    private: void ValidateTextBox(TextBox^ textBox, std::string text_box_name) {
        if (IsTextBoxEmpty(textBox)) {
            throw gcnew System::ArgumentException(String::Format("field {0} cannot be empty.", gcnew String(text_box_name.c_str())));
        }

        if (!IsTextBoxInteger(textBox)) {
            throw gcnew ArgumentException(String::Format("The {0} field must contain only integers", gcnew String(text_box_name.c_str())));
        }
    }

    private: System::Void button_calculate_Click(System::Object^ sender, System::EventArgs^ e) {

        try {
            ValidateTextBox(textBox1_n, "n (перший вираз)");
            ValidateTextBox(textBox1_m, "m (перший вираз)");
            ValidateTextBox(textBox1_k, "k (перший вираз)");

            ValidateTextBox(textBox2_n, "n (другий вираз)");
            ValidateTextBox(textBox2_m, "m (другий вираз)");
            ValidateTextBox(textBox2_k, "k (другий вираз)");



            double n_1 = Convert::ToInt32(textBox1_n->Text);
            double m_1 = Convert::ToInt32(textBox1_m->Text);
            double k_1 = Convert::ToInt32(textBox1_k->Text);


            double n_2 = Convert::ToInt32(textBox2_n->Text);
            double m_2 = Convert::ToInt32(textBox2_m->Text);
            double k_2 = Convert::ToInt32(textBox2_k->Text);


           // if (m_1 == 0 || p_1 == 0) {
            //    throw gcnew System::DivideByZeroException("Ділення на нуль у першому виразі.");
           // }

            //if (m_2 == 0 || p_2 == 0) {
           //     throw gcnew System::DivideByZeroException("Ділення на нуль у другому виразі.");
          //  }

            Expression first(n_1, m_1, k_1);
            Expression second(n_2, m_2, k_2);

            double first_result = first.calculate();
            double second_result = second.calculate();

            if (std::isnan(first_result) || std::isinf(first_result)) {
                throw gcnew FormatException("The first expression cannot be evaluated!");
            }

            if (std::isnan(second_result) || std::isinf(second_result)) {
                throw gcnew FormatException("The second expression cannot be evaluated!");
            }

            label1_res->Text = gcnew String(std::to_string(first_result).c_str());
            label2_res->Text = gcnew String(std::to_string(second_result).c_str());
            label_bober->Text = String::Format("sum: {0}", gcnew String(std::to_string(first_result + second_result).c_str()));
              

        }
        catch (System::FormatException^ ex) {
            MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        catch (System::ArgumentException^ ex) {
            MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        catch (System::DivideByZeroException^ ex) {
            MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        catch (Exception^ ex) {
            MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }

    private: System::Void button_clear_Click(System::Object^ sender, System::EventArgs^ e) {
        textBox1_n->Text = "";
        textBox1_m->Text = "";
        textBox1_k->Text = "";
  

        textBox2_n->Text = "";
        textBox2_m->Text = "";
        textBox2_k->Text = "";


    }
    };
}