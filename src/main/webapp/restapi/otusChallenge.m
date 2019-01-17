#import "otusChallenge.h"
#ifndef DEF_OTUSCHALLENGENS0StudentListDTO_M
#define DEF_OTUSCHALLENGENS0StudentListDTO_M

/**
 * (no documentation provided)
 */
@implementation OTUSCHALLENGENS0StudentListDTO

/**
 * (no documentation provided)
 */
- (NSArray *) students
{
  return _students;
}

/**
 * (no documentation provided)
 */
- (void) setStudents: (NSArray *) newStudents
{
  [newStudents retain];
  [_students release];
  _students = newStudents;
}

- (void) dealloc
{
  [self setStudents: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  OTUSCHALLENGENS0StudentListDTO *_oTUSCHALLENGENS0StudentListDTO;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _oTUSCHALLENGENS0StudentListDTO = (OTUSCHALLENGENS0StudentListDTO *) [OTUSCHALLENGENS0StudentListDTO readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _oTUSCHALLENGENS0StudentListDTO;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation OTUSCHALLENGENS0StudentListDTO */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface OTUSCHALLENGENS0StudentListDTO (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface OTUSCHALLENGENS0StudentListDTO (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation OTUSCHALLENGENS0StudentListDTO (JAXB)

/**
 * Read an instance of OTUSCHALLENGENS0StudentListDTO from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of OTUSCHALLENGENS0StudentListDTO defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  OTUSCHALLENGENS0StudentListDTO *_oTUSCHALLENGENS0StudentListDTO = [[OTUSCHALLENGENS0StudentListDTO alloc] init];
  NS_DURING
  {
    [_oTUSCHALLENGENS0StudentListDTO initWithReader: reader];
  }
  NS_HANDLER
  {
    _oTUSCHALLENGENS0StudentListDTO = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_oTUSCHALLENGENS0StudentListDTO autorelease];
  return _oTUSCHALLENGENS0StudentListDTO;
}

/**
 * Initialize this instance of OTUSCHALLENGENS0StudentListDTO according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of OTUSCHALLENGENS0StudentListDTO to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a OTUSCHALLENGENS0StudentListDTO from an XML reader. The element to be read is
 * "studentList".
 *
 * @param reader The XML reader.
 * @return The OTUSCHALLENGENS0StudentListDTO.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  OTUSCHALLENGENS0StudentListDTO *_studentListDTO = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element studentList."];
    }
  }

  if (xmlStrcmp(BAD_CAST "studentList", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}studentList.");
#endif
    _studentListDTO = (OTUSCHALLENGENS0StudentListDTO *)[OTUSCHALLENGENS0StudentListDTO readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}studentList.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read OTUSCHALLENGENS0StudentListDTO. Expected element studentList. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read OTUSCHALLENGENS0StudentListDTO. Expected element studentList. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _studentListDTO;
}

/**
 * Writes this OTUSCHALLENGENS0StudentListDTO to XML under element name "studentList".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _studentListDTO The StudentListDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this OTUSCHALLENGENS0StudentListDTO to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "studentList", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}studentList. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}studentListDTO for root element {}studentList...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}studentListDTO for root element {}studentList...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}studentList. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "students", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}students of type {}studentDTO.");
#endif

     __child = [OTUSCHALLENGENS0StudentDTO readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}students of type {}studentDTO.");
#endif

    if ([self students]) {
      [self setStudents: [[self students] arrayByAddingObject: __child]];
    }
    else {
      [self setStudents: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self students]) {
    __enumerator = [[self students] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "students", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}students."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}students...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}students...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}students."];
      }
    } //end item iterator.
  }
}
@end /* implementation OTUSCHALLENGENS0StudentListDTO (JAXB) */

#endif /* DEF_OTUSCHALLENGENS0StudentListDTO_M */
#ifndef DEF_OTUSCHALLENGENS0StudentDTO_M
#define DEF_OTUSCHALLENGENS0StudentDTO_M

/**
 * (no documentation provided)
 */
@implementation OTUSCHALLENGENS0StudentDTO

/**
 * (no documentation provided)
 */
- (NSString *) firstName
{
  return _firstName;
}

/**
 * (no documentation provided)
 */
- (void) setFirstName: (NSString *) newFirstName
{
  [newFirstName retain];
  [_firstName release];
  _firstName = newFirstName;
}

/**
 * (no documentation provided)
 */
- (NSString *) lastName
{
  return _lastName;
}

/**
 * (no documentation provided)
 */
- (void) setLastName: (NSString *) newLastName
{
  [newLastName retain];
  [_lastName release];
  _lastName = newLastName;
}

/**
 * (no documentation provided)
 */
- (NSString *) email
{
  return _email;
}

/**
 * (no documentation provided)
 */
- (void) setEmail: (NSString *) newEmail
{
  [newEmail retain];
  [_email release];
  _email = newEmail;
}

/**
 * (no documentation provided)
 */
- (double) gpa
{
  return _gpa;
}

/**
 * (no documentation provided)
 */
- (void) setGpa: (double) newGpa
{
  _gpa = newGpa;
}

/**
 * (no documentation provided)
 */
- (NSArray *) grades
{
  return _grades;
}

/**
 * (no documentation provided)
 */
- (void) setGrades: (NSArray *) newGrades
{
  [newGrades retain];
  [_grades release];
  _grades = newGrades;
}

- (void) dealloc
{
  [self setFirstName: nil];
  [self setLastName: nil];
  [self setEmail: nil];
  [self setGrades: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  OTUSCHALLENGENS0StudentDTO *_oTUSCHALLENGENS0StudentDTO;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _oTUSCHALLENGENS0StudentDTO = (OTUSCHALLENGENS0StudentDTO *) [OTUSCHALLENGENS0StudentDTO readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _oTUSCHALLENGENS0StudentDTO;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation OTUSCHALLENGENS0StudentDTO */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface OTUSCHALLENGENS0StudentDTO (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface OTUSCHALLENGENS0StudentDTO (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation OTUSCHALLENGENS0StudentDTO (JAXB)

/**
 * Read an instance of OTUSCHALLENGENS0StudentDTO from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of OTUSCHALLENGENS0StudentDTO defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  OTUSCHALLENGENS0StudentDTO *_oTUSCHALLENGENS0StudentDTO = [[OTUSCHALLENGENS0StudentDTO alloc] init];
  NS_DURING
  {
    [_oTUSCHALLENGENS0StudentDTO initWithReader: reader];
  }
  NS_HANDLER
  {
    _oTUSCHALLENGENS0StudentDTO = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_oTUSCHALLENGENS0StudentDTO autorelease];
  return _oTUSCHALLENGENS0StudentDTO;
}

/**
 * Initialize this instance of OTUSCHALLENGENS0StudentDTO according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of OTUSCHALLENGENS0StudentDTO to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a OTUSCHALLENGENS0StudentDTO from an XML reader. The element to be read is
 * "studentDetail".
 *
 * @param reader The XML reader.
 * @return The OTUSCHALLENGENS0StudentDTO.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  OTUSCHALLENGENS0StudentDTO *_studentDTO = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element studentDetail."];
    }
  }

  if (xmlStrcmp(BAD_CAST "studentDetail", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}studentDetail.");
#endif
    _studentDTO = (OTUSCHALLENGENS0StudentDTO *)[OTUSCHALLENGENS0StudentDTO readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}studentDetail.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read OTUSCHALLENGENS0StudentDTO. Expected element studentDetail. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read OTUSCHALLENGENS0StudentDTO. Expected element studentDetail. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _studentDTO;
}

/**
 * Writes this OTUSCHALLENGENS0StudentDTO to XML under element name "studentDetail".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _studentDTO The StudentDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this OTUSCHALLENGENS0StudentDTO to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "studentDetail", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}studentDetail. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}studentDTO for root element {}studentDetail...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}studentDTO for root element {}studentDetail...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}studentDetail. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "firstName", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}firstName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}firstName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setFirstName: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "lastName", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}lastName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}lastName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setLastName: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "email", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}email of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}email of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setEmail: __child];
    return YES;
  } //end "if choice"


  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "gpa", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadDoubleType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setGpa: *((double*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "grades", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}grades of type {}classGradeDTO.");
#endif

     __child = [OTUSCHALLENGENS0ClassGradeDTO readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}grades of type {}classGradeDTO.");
#endif

    if ([self grades]) {
      [self setGrades: [[self grades] arrayByAddingObject: __child]];
    }
    else {
      [self setGrades: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self firstName]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "firstName", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}firstName."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}firstName...");
#endif
    [[self firstName] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}firstName...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}firstName."];
    }
  }
  if ([self lastName]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "lastName", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}lastName."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}lastName...");
#endif
    [[self lastName] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}lastName...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}lastName."];
    }
  }
  if ([self email]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "email", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}email."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}email...");
#endif
    [[self email] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}email...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}email."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "gpa", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}gpa."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}gpa...");
#endif
    status = xmlTextWriterWriteDoubleType(writer, &_gpa);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}gpa...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}gpa."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}gpa."];
    }
  }
  if ([self grades]) {
    __enumerator = [[self grades] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "grades", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}grades."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}grades...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}grades...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}grades."];
      }
    } //end item iterator.
  }
}
@end /* implementation OTUSCHALLENGENS0StudentDTO (JAXB) */

#endif /* DEF_OTUSCHALLENGENS0StudentDTO_M */
#ifndef DEF_OTUSCHALLENGENS0ClassGradeDTO_M
#define DEF_OTUSCHALLENGENS0ClassGradeDTO_M

/**
 * (no documentation provided)
 */
@implementation OTUSCHALLENGENS0ClassGradeDTO

/**
 * (no documentation provided)
 */
- (NSString *) className
{
  return _className;
}

/**
 * (no documentation provided)
 */
- (void) setClassName: (NSString *) newClassName
{
  [newClassName retain];
  [_className release];
  _className = newClassName;
}

/**
 * (no documentation provided)
 */
- (double) grade
{
  return _grade;
}

/**
 * (no documentation provided)
 */
- (void) setGrade: (double) newGrade
{
  _grade = newGrade;
}

- (void) dealloc
{
  [self setClassName: nil];
  [super dealloc];
}
@end /* implementation OTUSCHALLENGENS0ClassGradeDTO */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface OTUSCHALLENGENS0ClassGradeDTO (JAXB) <JAXBReading, JAXBWriting, JAXBType>

@end /*interface OTUSCHALLENGENS0ClassGradeDTO (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation OTUSCHALLENGENS0ClassGradeDTO (JAXB)

/**
 * Read an instance of OTUSCHALLENGENS0ClassGradeDTO from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of OTUSCHALLENGENS0ClassGradeDTO defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  OTUSCHALLENGENS0ClassGradeDTO *_oTUSCHALLENGENS0ClassGradeDTO = [[OTUSCHALLENGENS0ClassGradeDTO alloc] init];
  NS_DURING
  {
    [_oTUSCHALLENGENS0ClassGradeDTO initWithReader: reader];
  }
  NS_HANDLER
  {
    _oTUSCHALLENGENS0ClassGradeDTO = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_oTUSCHALLENGENS0ClassGradeDTO autorelease];
  return _oTUSCHALLENGENS0ClassGradeDTO;
}

/**
 * Initialize this instance of OTUSCHALLENGENS0ClassGradeDTO according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of OTUSCHALLENGENS0ClassGradeDTO to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "className", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}className of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}className of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setClassName: __child];
    return YES;
  } //end "if choice"


  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "grade", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadDoubleType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setGrade: *((double*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self className]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "className", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}className."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}className...");
#endif
    [[self className] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}className...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}className."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "grade", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}grade."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}grade...");
#endif
    status = xmlTextWriterWriteDoubleType(writer, &_grade);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}grade...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}grade."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}grade."];
    }
  }
}
@end /* implementation OTUSCHALLENGENS0ClassGradeDTO (JAXB) */

#endif /* DEF_OTUSCHALLENGENS0ClassGradeDTO_M */
