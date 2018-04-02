#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():Form("ShrubberyCreationForm",137,145),_target("tree"){}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form("ShrubberyCreationForm",137,145),_target(target){}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src):Form("ShrubberyCreationForm",137,145){  _target = src.getTarget();  }

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src){
    this->Form::operator=(src);
    this->_target = src.getTarget();
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & bureaucrate) const{
    if (!this->getSigned() || bureaucrate.getGrade() > this->getGradeExec()){
        throw(ShrubberyCreationForm::GradeTooHighException());
    }
    std::string filename(_target);
    filename.append("_shrubbery");
    std::ofstream tree;
    tree.open (filename);
    tree <<"        - - -"<<std::endl<<"       -        -  -     --    -"<<std::endl<<"    -                 -         -  -"<<std::endl<<"                    -"<<std::endl<<"                   -                --"<<std::endl<<"   -          -            -              -"<<std::endl<<"   -            '-,        -               -"<<std::endl<<"   -              'b      *"<<std::endl<<"    -              '$    #-                --"<<std::endl<<"   -    -           $:   #:               -"<<std::endl<<" --      -  --      *#  @):        -   - -"<<std::endl<<"              -     :@,@):   ,-**:'   -"<<std::endl<<"  -      -,         :@@*: --**'      -   -"<<std::endl<<"           '#o-    -:(@'-@*\"'  -"<<std::endl<<"   -  -       'bq,--:,@@*'   ,*      -  -"<<std::endl<<"              ,p$q8,:@)'  -p*'      -"<<std::endl<<"       -     '  - '@@Pp@@*'    -  -"<<std::endl<<"        -  - --    Y7'.'     -  -"<<std::endl<<"                  :@):."<<std::endl<<"                 .:@:'."<<std::endl<<"               .::(@:."<<std::endl;
    tree <<"        - - -"<<std::endl<<"       -        -  -     --    -"<<std::endl<<"    -                 -         -  -"<<std::endl<<"                    -"<<std::endl<<"                   -                --"<<std::endl<<"   -          -            -              -"<<std::endl<<"   -            '-,        -               -"<<std::endl<<"   -              'b      *"<<std::endl<<"    -              '$    #-                --"<<std::endl<<"   -    -           $:   #:               -"<<std::endl<<" --      -  --      *#  @):        -   - -"<<std::endl<<"              -     :@,@):   ,-**:'   -"<<std::endl<<"  -      -,         :@@*: --**'      -   -"<<std::endl<<"           '#o-    -:(@'-@*\"'  -"<<std::endl<<"   -  -       'bq,--:,@@*'   ,*      -  -"<<std::endl<<"              ,p$q8,:@)'  -p*'      -"<<std::endl<<"       -     '  - '@@Pp@@*'    -  -"<<std::endl<<"        -  - --    Y7'.'     -  -"<<std::endl<<"                  :@):."<<std::endl<<"                 .:@:'."<<std::endl<<"               .::(@:."<<std::endl;
    tree.close();
}

std::string ShrubberyCreationForm::getTarget()const{return this->_target;}
