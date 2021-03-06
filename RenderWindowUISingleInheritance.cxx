#include "RenderWindowUISingleInheritance.h"

// This is included here because it is forward declared in
// RenderWindowUISingleInheritance.h
#include "ui_RenderWindowUISingleInheritance.h"

#include <vtkPolyDataMapper.h>
#include <vtkRenderer.h>
#include <vtkRenderWindow.h>
#include <vtkSphereSource.h>
#include <vtkSmartPointer.h>
#include <vtkPolyDataReader.h>
#include <QFileDialog>
#include <QString>
// Constructor
RenderWindowUISingleInheritance::RenderWindowUISingleInheritance() 
{
  this->ui = new Ui_RenderWindowUISingleInheritance;
  this->ui->setupUi(this);
 
  // Sphere
//    QString inputFilename = QFileDialog::getOpenFileName(this,tr("Open Image"),"~",tr("Image Files (*.vtk)"));
//    QByteArray arr = inputFilename.toLatin1();
//    const char *filename = arr.data();
//    vtkPolyDataReader *meshReader = vtkPolyDataReader::New() ;
//    meshReader->SetFileName ( filename ) ;
//    meshReader->Update () ;
//    vtkPolyData *polydata = meshReader->GetOutput();

//  vtkSmartPointer<vtkPolyDataMapper> sphereMapper =
//      vtkSmartPointer<vtkPolyDataMapper>::New();
//  sphereMapper->SetInput(polydata);
//  vtkSmartPointer<vtkActor> sphereActor =
//      vtkSmartPointer<vtkActor>::New();
//  sphereActor->SetMapper(sphereMapper);
 
//  // VTK Renderer
//  vtkSmartPointer<vtkRenderer> renderer =
//      vtkSmartPointer<vtkRenderer>::New();
//  renderer->AddActor(sphereActor);
 
//  // VTK/Qt wedded
//  this->ui->qvtkWidget->GetRenderWindow()->AddRenderer(renderer);
 
  // Set up action signals and slots
  connect(this->ui->actionExit, SIGNAL(triggered()), this, SLOT(slotExit()));
 
}
void RenderWindowUISingleInheritance::on_pushButton_clicked() {
    QString inputFilename = QFileDialog::getOpenFileName(this,tr("Open Image"),"~",tr("Image Files (*.vtk)"));
    QByteArray arr = inputFilename.toLatin1();
    const char *filename = arr.data();
    vtkPolyDataReader *meshReader = vtkPolyDataReader::New() ;
    meshReader->SetFileName ( filename ) ;
    meshReader->Update () ;
    vtkPolyData *polydata = meshReader->GetOutput();

  vtkSmartPointer<vtkPolyDataMapper> sphereMapper =
      vtkSmartPointer<vtkPolyDataMapper>::New();
  sphereMapper->SetInput(polydata);
  vtkSmartPointer<vtkActor> sphereActor =
      vtkSmartPointer<vtkActor>::New();
  sphereActor->SetMapper(sphereMapper);

  // VTK Renderer
  vtkSmartPointer<vtkRenderer> renderer =
      vtkSmartPointer<vtkRenderer>::New();
  renderer->AddActor(sphereActor);

  // VTK/Qt wedded
  this->ui->qvtkWidget->GetRenderWindow()->AddRenderer(renderer);
}

void RenderWindowUISingleInheritance::slotExit() 
{
  qApp->exit();
}
