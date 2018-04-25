/*
  @author: Rodrigo Delgadillo Perez
  @version: 1.0.0
  @section: SE3377.501
  @description:
*/


#include <iostream>
#include <fstream>
#include <sys/stat.h>

class BinaryFileHeader
{
public:
  uint32_t magicNumber; /* Should be 0xFEEDFACE */
  uint32_t versionNumber;
  uint64_t numRecords;
};


const int maxRecordStringLength = 25;

class BinaryFileRecord
{
public:
  uint8_t strLength;
  char stringBuffer[maxRecordStringLength];
};


void readBinaryFile(){
 
}//end of function readBinaryFile
  

/*
 * Records in the file have a fixed length buffer
 * that will hold a C-Style string. This is the
 * size of the fixed length buffer.
 */
const int maxRecordStringLength = 25;

class BinaryFileRecord
{
public:
  uint8_t strLength;
  char stringBuffer[maxRecordStringLength];
};
