#include <enunciate-common.c>
#ifndef DEF_otusChallenge_ns0_classGradeDTO_H
#define DEF_otusChallenge_ns0_classGradeDTO_H

/**
 * (no documentation provided)
 */
struct otusChallenge_ns0_classGradeDTO {


  /**
   * (no documentation provided)
   */
  xmlChar *className;

  /**
   * (no documentation provided)
   */
  double grade;
};

/**
 * Reads a ClassGradeDTO from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The ClassGradeDTO, or NULL in case of error.
 */
static struct otusChallenge_ns0_classGradeDTO *xmlTextReaderReadNs0ClassGradeDTOType(xmlTextReaderPtr reader);

/**
 * Writes a ClassGradeDTO to XML.
 *
 * @param writer The XML writer.
 * @param _classGradeDTO The ClassGradeDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ClassGradeDTOType(xmlTextWriterPtr writer, struct otusChallenge_ns0_classGradeDTO *_classGradeDTO);

/**
 * Frees the elements of a ClassGradeDTO.
 *
 * @param _classGradeDTO The ClassGradeDTO to free.
 */
static void freeNs0ClassGradeDTOType(struct otusChallenge_ns0_classGradeDTO *_classGradeDTO);

#endif /* DEF_otusChallenge_ns0_classGradeDTO_H */
#ifndef DEF_otusChallenge_ns0_studentDTO_H
#define DEF_otusChallenge_ns0_studentDTO_H

/**
 * (no documentation provided)
 */
struct otusChallenge_ns0_studentDTO {


  /**
   * (no documentation provided)
   */
  xmlChar *firstName;

  /**
   * (no documentation provided)
   */
  xmlChar *lastName;

  /**
   * (no documentation provided)
   */
  xmlChar *email;

  /**
   * (no documentation provided)
   */
  double gpa;

  /**
   * (no documentation provided)
   */
  struct otusChallenge_ns0_classGradeDTO *grades;

  /**
   * Size of the grades array.
   */
  int _sizeof_grades;
};

/**
 * Reads a StudentDTO element from XML. The element to be read is "studentDetail", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The StudentDTO, or NULL in case of error.
 */
struct otusChallenge_ns0_studentDTO *xml_read_otusChallenge_ns0_studentDTO(xmlTextReaderPtr reader);

/**
 * Writes a StudentDTO to XML under element name "studentDetail".
 *
 * @param writer The XML writer.
 * @param _studentDTO The StudentDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_otusChallenge_ns0_studentDTO(xmlTextWriterPtr writer, struct otusChallenge_ns0_studentDTO *_studentDTO);

/**
 * Frees a StudentDTO.
 *
 * @param _studentDTO The StudentDTO to free.
 */
void free_otusChallenge_ns0_studentDTO(struct otusChallenge_ns0_studentDTO *_studentDTO);

/**
 * Reads a StudentDTO element from XML. The element to be read is "studentDetail", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The StudentDTO, or NULL in case of error.
 */
struct otusChallenge_ns0_studentDTO *xmlTextReaderReadNs0StudentDetailElement(xmlTextReaderPtr reader);

/**
 * Writes a StudentDTO to XML under element name "studentDetail".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _studentDTO The StudentDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0StudentDetailElement(xmlTextWriterPtr writer, struct otusChallenge_ns0_studentDTO *_studentDTO);

/**
 * Writes a StudentDTO to XML under element name "studentDetail".
 *
 * @param writer The XML writer.
 * @param _studentDTO The StudentDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0StudentDetailElementNS(xmlTextWriterPtr writer, struct otusChallenge_ns0_studentDTO *_studentDTO, int writeNamespaces);

/**
 * Frees the children of a StudentDTO.
 *
 * @param _studentDTO The StudentDTO whose children are to be free.
 */
static void freeNs0StudentDetailElement(struct otusChallenge_ns0_studentDTO *_studentDTO);

/**
 * Reads a StudentDTO from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The StudentDTO, or NULL in case of error.
 */
static struct otusChallenge_ns0_studentDTO *xmlTextReaderReadNs0StudentDTOType(xmlTextReaderPtr reader);

/**
 * Writes a StudentDTO to XML.
 *
 * @param writer The XML writer.
 * @param _studentDTO The StudentDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0StudentDTOType(xmlTextWriterPtr writer, struct otusChallenge_ns0_studentDTO *_studentDTO);

/**
 * Frees the elements of a StudentDTO.
 *
 * @param _studentDTO The StudentDTO to free.
 */
static void freeNs0StudentDTOType(struct otusChallenge_ns0_studentDTO *_studentDTO);

#endif /* DEF_otusChallenge_ns0_studentDTO_H */
#ifndef DEF_otusChallenge_ns0_studentListDTO_H
#define DEF_otusChallenge_ns0_studentListDTO_H

/**
 * (no documentation provided)
 */
struct otusChallenge_ns0_studentListDTO {


  /**
   * (no documentation provided)
   */
  struct otusChallenge_ns0_studentDTO *students;

  /**
   * Size of the students array.
   */
  int _sizeof_students;
};

/**
 * Reads a StudentListDTO element from XML. The element to be read is "studentList", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The StudentListDTO, or NULL in case of error.
 */
struct otusChallenge_ns0_studentListDTO *xml_read_otusChallenge_ns0_studentListDTO(xmlTextReaderPtr reader);

/**
 * Writes a StudentListDTO to XML under element name "studentList".
 *
 * @param writer The XML writer.
 * @param _studentListDTO The StudentListDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_otusChallenge_ns0_studentListDTO(xmlTextWriterPtr writer, struct otusChallenge_ns0_studentListDTO *_studentListDTO);

/**
 * Frees a StudentListDTO.
 *
 * @param _studentListDTO The StudentListDTO to free.
 */
void free_otusChallenge_ns0_studentListDTO(struct otusChallenge_ns0_studentListDTO *_studentListDTO);

/**
 * Reads a StudentListDTO element from XML. The element to be read is "studentList", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The StudentListDTO, or NULL in case of error.
 */
struct otusChallenge_ns0_studentListDTO *xmlTextReaderReadNs0StudentListElement(xmlTextReaderPtr reader);

/**
 * Writes a StudentListDTO to XML under element name "studentList".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _studentListDTO The StudentListDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0StudentListElement(xmlTextWriterPtr writer, struct otusChallenge_ns0_studentListDTO *_studentListDTO);

/**
 * Writes a StudentListDTO to XML under element name "studentList".
 *
 * @param writer The XML writer.
 * @param _studentListDTO The StudentListDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0StudentListElementNS(xmlTextWriterPtr writer, struct otusChallenge_ns0_studentListDTO *_studentListDTO, int writeNamespaces);

/**
 * Frees the children of a StudentListDTO.
 *
 * @param _studentListDTO The StudentListDTO whose children are to be free.
 */
static void freeNs0StudentListElement(struct otusChallenge_ns0_studentListDTO *_studentListDTO);

/**
 * Reads a StudentListDTO from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The StudentListDTO, or NULL in case of error.
 */
static struct otusChallenge_ns0_studentListDTO *xmlTextReaderReadNs0StudentListDTOType(xmlTextReaderPtr reader);

/**
 * Writes a StudentListDTO to XML.
 *
 * @param writer The XML writer.
 * @param _studentListDTO The StudentListDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0StudentListDTOType(xmlTextWriterPtr writer, struct otusChallenge_ns0_studentListDTO *_studentListDTO);

/**
 * Frees the elements of a StudentListDTO.
 *
 * @param _studentListDTO The StudentListDTO to free.
 */
static void freeNs0StudentListDTOType(struct otusChallenge_ns0_studentListDTO *_studentListDTO);

#endif /* DEF_otusChallenge_ns0_studentListDTO_H */
#ifndef DEF_otusChallenge_ns0_classGradeDTO_M
#define DEF_otusChallenge_ns0_classGradeDTO_M

/**
 * Reads a ClassGradeDTO from XML. The reader is assumed to be at the start element.
 *
 * @return the ClassGradeDTO, or NULL in case of error.
 */
static struct otusChallenge_ns0_classGradeDTO *xmlTextReaderReadNs0ClassGradeDTOType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct otusChallenge_ns0_classGradeDTO *_classGradeDTO = calloc(1, sizeof(struct otusChallenge_ns0_classGradeDTO));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0ClassGradeDTOType(_classGradeDTO);
        free(_classGradeDTO);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "className", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}className of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}className of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ClassGradeDTOType(_classGradeDTO);
          free(_classGradeDTO);
          return NULL;
        }

        _classGradeDTO->className = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "grade", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}grade of type {http://www.w3.org/2001/XMLSchema}double.\n");
#endif
        _child_accessor = xmlTextReaderReadXsDoubleType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}grade of type {http://www.w3.org/2001/XMLSchema}double.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ClassGradeDTOType(_classGradeDTO);
          free(_classGradeDTO);
          return NULL;
        }

        _classGradeDTO->grade = *((double*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}classGradeDTO.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}classGradeDTO. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _classGradeDTO;
}

/**
 * Writes a ClassGradeDTO to XML.
 *
 * @param writer The XML writer.
 * @param _classGradeDTO The ClassGradeDTO to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0ClassGradeDTOType(xmlTextWriterPtr writer, struct otusChallenge_ns0_classGradeDTO *_classGradeDTO) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_classGradeDTO->className != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "className", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}className. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}className...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_classGradeDTO->className));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}className. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}className. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "grade", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}grade. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}double for element {}grade...\n");
#endif
    status = xmlTextWriterWriteXsDoubleType(writer, &(_classGradeDTO->grade));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}double for element {}grade. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}grade. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a ClassGradeDTO.
 *
 * @param _classGradeDTO The ClassGradeDTO to free.
 */
static void freeNs0ClassGradeDTOType(struct otusChallenge_ns0_classGradeDTO *_classGradeDTO) {
  int i;
  if (_classGradeDTO->className != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor className of type otusChallenge_ns0_classGradeDTO...\n");
#endif
    freeXsStringType(_classGradeDTO->className);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor className of type otusChallenge_ns0_classGradeDTO...\n");
#endif
    free(_classGradeDTO->className);
  }
}
#endif /* DEF_otusChallenge_ns0_classGradeDTO_M */
#ifndef DEF_otusChallenge_ns0_studentDTO_M
#define DEF_otusChallenge_ns0_studentDTO_M

/**
 * Reads a StudentDTO element from XML. The element to be read is "studentDetail", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The StudentDTO, or NULL in case of error.
 */
struct otusChallenge_ns0_studentDTO *xml_read_otusChallenge_ns0_studentDTO(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0StudentDetailElement(reader);
}

/**
 * Writes a StudentDTO to XML under element name "studentDetail".
 *
 * @param writer The XML writer.
 * @param _studentDTO The StudentDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_otusChallenge_ns0_studentDTO(xmlTextWriterPtr writer, struct otusChallenge_ns0_studentDTO *_studentDTO) {
  return xmlTextWriterWriteNs0StudentDetailElementNS(writer, _studentDTO, 1);
}

/**
 * Frees a StudentDTO.
 *
 * @param _studentDTO The StudentDTO to free.
 */
void free_otusChallenge_ns0_studentDTO(struct otusChallenge_ns0_studentDTO *_studentDTO) {
  freeNs0StudentDTOType(_studentDTO);
  free(_studentDTO);
}

/**
 * Reads a StudentDTO element from XML. The element to be read is "studentDetail", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The StudentDTO, or NULL in case of error.
 */
struct otusChallenge_ns0_studentDTO *xmlTextReaderReadNs0StudentDetailElement(xmlTextReaderPtr reader) {
  struct otusChallenge_ns0_studentDTO *_studentDTO = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "studentDetail", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}studentDetail.\n");
#endif
    _studentDTO = xmlTextReaderReadNs0StudentDTOType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_studentDTO == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}studentDetail failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}studentDetail failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _studentDTO;
}

/**
 * Writes a StudentDTO to XML under element name "studentDetail".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _studentDTO The StudentDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0StudentDetailElement(xmlTextWriterPtr writer, struct otusChallenge_ns0_studentDTO *_studentDTO) {
  return xmlTextWriterWriteNs0StudentDetailElementNS(writer, _studentDTO, 0);
}

/**
 * Writes a StudentDTO to XML under element name "studentDetail".
 *
 * @param writer The XML writer.
 * @param _studentDTO The StudentDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0StudentDetailElementNS(xmlTextWriterPtr writer, struct otusChallenge_ns0_studentDTO *_studentDTO, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "studentDetail", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}studentDetail. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}studentDTO for root element {}studentDetail...\n");
#endif
  status = xmlTextWriterWriteNs0StudentDTOType(writer, _studentDTO);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}studentDetail. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}studentDetail. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a StudentDTO.
 *
 * @param _studentDTO The StudentDTO whose children are to be free.
 */
static void freeNs0StudentDetailElement(struct otusChallenge_ns0_studentDTO *_studentDTO) {
  freeNs0StudentDTOType(_studentDTO);
}

/**
 * Reads a StudentDTO from XML. The reader is assumed to be at the start element.
 *
 * @return the StudentDTO, or NULL in case of error.
 */
static struct otusChallenge_ns0_studentDTO *xmlTextReaderReadNs0StudentDTOType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct otusChallenge_ns0_studentDTO *_studentDTO = calloc(1, sizeof(struct otusChallenge_ns0_studentDTO));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0StudentDTOType(_studentDTO);
        free(_studentDTO);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "firstName", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}firstName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}firstName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0StudentDTOType(_studentDTO);
          free(_studentDTO);
          return NULL;
        }

        _studentDTO->firstName = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "lastName", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}lastName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}lastName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0StudentDTOType(_studentDTO);
          free(_studentDTO);
          return NULL;
        }

        _studentDTO->lastName = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "email", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}email of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}email of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0StudentDTOType(_studentDTO);
          free(_studentDTO);
          return NULL;
        }

        _studentDTO->email = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "gpa", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}gpa of type {http://www.w3.org/2001/XMLSchema}double.\n");
#endif
        _child_accessor = xmlTextReaderReadXsDoubleType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}gpa of type {http://www.w3.org/2001/XMLSchema}double.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0StudentDTOType(_studentDTO);
          free(_studentDTO);
          return NULL;
        }

        _studentDTO->gpa = *((double*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "grades", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}grades of type {}classGradeDTO.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0ClassGradeDTOType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}grades of type {}classGradeDTO.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0StudentDTOType(_studentDTO);
          free(_studentDTO);
          return NULL;
        }

        _studentDTO->grades = realloc(_studentDTO->grades, (_studentDTO->_sizeof_grades + 1) * sizeof(struct otusChallenge_ns0_classGradeDTO));
        memcpy(&(_studentDTO->grades[_studentDTO->_sizeof_grades++]), _child_accessor, sizeof(struct otusChallenge_ns0_classGradeDTO));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}studentDTO.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}studentDTO. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _studentDTO;
}

/**
 * Writes a StudentDTO to XML.
 *
 * @param writer The XML writer.
 * @param _studentDTO The StudentDTO to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0StudentDTOType(xmlTextWriterPtr writer, struct otusChallenge_ns0_studentDTO *_studentDTO) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_studentDTO->firstName != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "firstName", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}firstName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}firstName...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_studentDTO->firstName));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}firstName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}firstName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_studentDTO->lastName != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "lastName", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}lastName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}lastName...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_studentDTO->lastName));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}lastName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}lastName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_studentDTO->email != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "email", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}email. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}email...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_studentDTO->email));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}email. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}email. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "gpa", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}gpa. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}double for element {}gpa...\n");
#endif
    status = xmlTextWriterWriteXsDoubleType(writer, &(_studentDTO->gpa));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}double for element {}gpa. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}gpa. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _studentDTO->_sizeof_grades; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "grades", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}grades. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}classGradeDTO for element {}grades...\n");
#endif
    status = xmlTextWriterWriteNs0ClassGradeDTOType(writer, &(_studentDTO->grades[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}classGradeDTO for element {}grades. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}grades. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a StudentDTO.
 *
 * @param _studentDTO The StudentDTO to free.
 */
static void freeNs0StudentDTOType(struct otusChallenge_ns0_studentDTO *_studentDTO) {
  int i;
  if (_studentDTO->firstName != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor firstName of type otusChallenge_ns0_studentDTO...\n");
#endif
    freeXsStringType(_studentDTO->firstName);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor firstName of type otusChallenge_ns0_studentDTO...\n");
#endif
    free(_studentDTO->firstName);
  }
  if (_studentDTO->lastName != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor lastName of type otusChallenge_ns0_studentDTO...\n");
#endif
    freeXsStringType(_studentDTO->lastName);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor lastName of type otusChallenge_ns0_studentDTO...\n");
#endif
    free(_studentDTO->lastName);
  }
  if (_studentDTO->email != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor email of type otusChallenge_ns0_studentDTO...\n");
#endif
    freeXsStringType(_studentDTO->email);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor email of type otusChallenge_ns0_studentDTO...\n");
#endif
    free(_studentDTO->email);
  }
  if (_studentDTO->grades != NULL) {
    for (i = 0; i < _studentDTO->_sizeof_grades; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor grades[%i] of type otusChallenge_ns0_studentDTO...\n", i);
#endif
      freeNs0ClassGradeDTOType(&(_studentDTO->grades[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor grades of type otusChallenge_ns0_studentDTO...\n");
#endif
    free(_studentDTO->grades);
  }
}
#endif /* DEF_otusChallenge_ns0_studentDTO_M */
#ifndef DEF_otusChallenge_ns0_studentListDTO_M
#define DEF_otusChallenge_ns0_studentListDTO_M

/**
 * Reads a StudentListDTO element from XML. The element to be read is "studentList", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The StudentListDTO, or NULL in case of error.
 */
struct otusChallenge_ns0_studentListDTO *xml_read_otusChallenge_ns0_studentListDTO(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0StudentListElement(reader);
}

/**
 * Writes a StudentListDTO to XML under element name "studentList".
 *
 * @param writer The XML writer.
 * @param _studentListDTO The StudentListDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_otusChallenge_ns0_studentListDTO(xmlTextWriterPtr writer, struct otusChallenge_ns0_studentListDTO *_studentListDTO) {
  return xmlTextWriterWriteNs0StudentListElementNS(writer, _studentListDTO, 1);
}

/**
 * Frees a StudentListDTO.
 *
 * @param _studentListDTO The StudentListDTO to free.
 */
void free_otusChallenge_ns0_studentListDTO(struct otusChallenge_ns0_studentListDTO *_studentListDTO) {
  freeNs0StudentListDTOType(_studentListDTO);
  free(_studentListDTO);
}

/**
 * Reads a StudentListDTO element from XML. The element to be read is "studentList", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The StudentListDTO, or NULL in case of error.
 */
struct otusChallenge_ns0_studentListDTO *xmlTextReaderReadNs0StudentListElement(xmlTextReaderPtr reader) {
  struct otusChallenge_ns0_studentListDTO *_studentListDTO = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "studentList", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}studentList.\n");
#endif
    _studentListDTO = xmlTextReaderReadNs0StudentListDTOType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_studentListDTO == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}studentList failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}studentList failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _studentListDTO;
}

/**
 * Writes a StudentListDTO to XML under element name "studentList".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _studentListDTO The StudentListDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0StudentListElement(xmlTextWriterPtr writer, struct otusChallenge_ns0_studentListDTO *_studentListDTO) {
  return xmlTextWriterWriteNs0StudentListElementNS(writer, _studentListDTO, 0);
}

/**
 * Writes a StudentListDTO to XML under element name "studentList".
 *
 * @param writer The XML writer.
 * @param _studentListDTO The StudentListDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0StudentListElementNS(xmlTextWriterPtr writer, struct otusChallenge_ns0_studentListDTO *_studentListDTO, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "studentList", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}studentList. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}studentListDTO for root element {}studentList...\n");
#endif
  status = xmlTextWriterWriteNs0StudentListDTOType(writer, _studentListDTO);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}studentList. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}studentList. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a StudentListDTO.
 *
 * @param _studentListDTO The StudentListDTO whose children are to be free.
 */
static void freeNs0StudentListElement(struct otusChallenge_ns0_studentListDTO *_studentListDTO) {
  freeNs0StudentListDTOType(_studentListDTO);
}

/**
 * Reads a StudentListDTO from XML. The reader is assumed to be at the start element.
 *
 * @return the StudentListDTO, or NULL in case of error.
 */
static struct otusChallenge_ns0_studentListDTO *xmlTextReaderReadNs0StudentListDTOType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct otusChallenge_ns0_studentListDTO *_studentListDTO = calloc(1, sizeof(struct otusChallenge_ns0_studentListDTO));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0StudentListDTOType(_studentListDTO);
        free(_studentListDTO);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "students", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}students of type {}studentDTO.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0StudentDTOType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}students of type {}studentDTO.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0StudentListDTOType(_studentListDTO);
          free(_studentListDTO);
          return NULL;
        }

        _studentListDTO->students = realloc(_studentListDTO->students, (_studentListDTO->_sizeof_students + 1) * sizeof(struct otusChallenge_ns0_studentDTO));
        memcpy(&(_studentListDTO->students[_studentListDTO->_sizeof_students++]), _child_accessor, sizeof(struct otusChallenge_ns0_studentDTO));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}studentListDTO.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}studentListDTO. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _studentListDTO;
}

/**
 * Writes a StudentListDTO to XML.
 *
 * @param writer The XML writer.
 * @param _studentListDTO The StudentListDTO to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0StudentListDTOType(xmlTextWriterPtr writer, struct otusChallenge_ns0_studentListDTO *_studentListDTO) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  for (i = 0; i < _studentListDTO->_sizeof_students; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "students", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}students. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}studentDTO for element {}students...\n");
#endif
    status = xmlTextWriterWriteNs0StudentDTOType(writer, &(_studentListDTO->students[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}studentDTO for element {}students. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}students. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a StudentListDTO.
 *
 * @param _studentListDTO The StudentListDTO to free.
 */
static void freeNs0StudentListDTOType(struct otusChallenge_ns0_studentListDTO *_studentListDTO) {
  int i;
  if (_studentListDTO->students != NULL) {
    for (i = 0; i < _studentListDTO->_sizeof_students; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor students[%i] of type otusChallenge_ns0_studentListDTO...\n", i);
#endif
      freeNs0StudentDTOType(&(_studentListDTO->students[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor students of type otusChallenge_ns0_studentListDTO...\n");
#endif
    free(_studentListDTO->students);
  }
}
#endif /* DEF_otusChallenge_ns0_studentListDTO_M */
