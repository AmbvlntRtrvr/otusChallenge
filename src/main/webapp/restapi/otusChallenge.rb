#
# 
#
# Generated by <a href="http://enunciate.webcohesion.com">Enunciate</a>.
#
require 'json'

# adding necessary json serialization methods to standard classes.
class Object
  def to_jaxb_json_hash
    return self
  end
  def self.from_json o
    return o
  end
end

class String
  def self.from_json o
    return o
  end
end

class Boolean
  def self.from_json o
    return o
  end
end

class Numeric
  def self.from_json o
    return o
  end
end

class Time
  #json time is represented as number of milliseconds since epoch
  def to_jaxb_json_hash
    return (to_i * 1000) + (usec / 1000)
  end
  def self.from_json o
    if o.nil?
      return nil
    else
      return Time.at(o / 1000, (o % 1000) * 1000)
    end
  end
end

class Array
  def to_jaxb_json_hash
    a = Array.new
    each { | _item | a.push _item.to_jaxb_json_hash }
    return a
  end
end

class Hash
  def to_jaxb_json_hash
    h = Hash.new
    each { | _key, _value | h[_key.to_jaxb_json_hash] = _value.to_jaxb_json_hash }
    return h
  end
end

module EnunciateHelpers
  LAMB_CLASS_AWARE = ->(_item) do
    java_clazz = _item['@class']
    clazz_array_parts = java_clazz.split('.')
    short_clazz = clazz_array_parts.pop
    clazz_package = clazz_array_parts.map do |e| e[0] = e.first.capitalize; e end.join("::")
    clazz = clazz_package + "::" + short_clazz
    Object.const_get(clazz).send(:from_json, _item)
  end
end


module Abogner

module OtusChallenge

module Rest

module Student

module Dto

  # (no documentation provided)
  class ClassGradeDTO 

    # (no documentation provided)
    attr_accessor :className
    # (no documentation provided)
    attr_accessor :grade

    # the json hash for this ClassGradeDTO
    def to_jaxb_json_hash
      _h = {}
      _h['className'] = className.to_jaxb_json_hash unless className.nil?
      _h['grade'] = grade.to_jaxb_json_hash unless grade.nil?
      return _h
    end

    # the json (string form) for this ClassGradeDTO
    def to_json
      to_jaxb_json_hash.to_json
    end

    #initializes this ClassGradeDTO with a json hash
    def init_jaxb_json_hash(_o)
        if !_o['className'].nil?
          _oa = _o['className']
            if(_oa.is_a? Hash)
              @className = EnunciateHelpers::LAMB_CLASS_AWARE.call(_oa) if _oa['@class']
              @className =  String.from_json(_oa) unless _oa['@class']
            elsif (_oa.is_a? Array)
              #an array(of hashes hopefully) or scalar
              @className = Array.new
              _oa.each { | _item | 
                 if ((_item.nil? || _item['@class'].nil?)rescue true)
                   @className.push String.from_json(_item)
                 else
                   @className.push EnunciateHelpers::LAMB_CLASS_AWARE.call(_item)
                 end
               }
            else
                @className = _oa
            end
          end
        if !_o['grade'].nil?
          _oa = _o['grade']
            if(_oa.is_a? Hash)
              @grade = EnunciateHelpers::LAMB_CLASS_AWARE.call(_oa) if _oa['@class']
              @grade =  Float.from_json(_oa) unless _oa['@class']
            elsif (_oa.is_a? Array)
              #an array(of hashes hopefully) or scalar
              @grade = Array.new
              _oa.each { | _item | 
                 if ((_item.nil? || _item['@class'].nil?)rescue true)
                   @grade.push Float.from_json(_item)
                 else
                   @grade.push EnunciateHelpers::LAMB_CLASS_AWARE.call(_item)
                 end
               }
            else
                @grade = _oa
            end
          end
    end

    # constructs a ClassGradeDTO from a (parsed) JSON hash
    def self.from_json(o)
      if o.nil?
        return nil
      else
        inst = new
        inst.init_jaxb_json_hash o
        return inst
      end
    end
  end

end

end

end

end

end

module Abogner

module OtusChallenge

module Rest

module Student

module Dto

  # (no documentation provided)
  class StudentDTO 

    # (no documentation provided)
    attr_accessor :firstName
    # (no documentation provided)
    attr_accessor :lastName
    # (no documentation provided)
    attr_accessor :email
    # (no documentation provided)
    attr_accessor :gpa
    # (no documentation provided)
    attr_accessor :grades

    # the json hash for this StudentDTO
    def to_jaxb_json_hash
      _h = {}
      _h['firstName'] = firstName.to_jaxb_json_hash unless firstName.nil?
      _h['lastName'] = lastName.to_jaxb_json_hash unless lastName.nil?
      _h['email'] = email.to_jaxb_json_hash unless email.nil?
      _h['gpa'] = gpa.to_jaxb_json_hash unless gpa.nil?
      if !grades.nil?
        _ha = Array.new
        grades.each { | _item | _ha.push _item.to_jaxb_json_hash }
        _h['grades'] = _ha
      end
      return _h
    end

    # the json (string form) for this StudentDTO
    def to_json
      to_jaxb_json_hash.to_json
    end

    #initializes this StudentDTO with a json hash
    def init_jaxb_json_hash(_o)
        if !_o['firstName'].nil?
          _oa = _o['firstName']
            if(_oa.is_a? Hash)
              @firstName = EnunciateHelpers::LAMB_CLASS_AWARE.call(_oa) if _oa['@class']
              @firstName =  String.from_json(_oa) unless _oa['@class']
            elsif (_oa.is_a? Array)
              #an array(of hashes hopefully) or scalar
              @firstName = Array.new
              _oa.each { | _item | 
                 if ((_item.nil? || _item['@class'].nil?)rescue true)
                   @firstName.push String.from_json(_item)
                 else
                   @firstName.push EnunciateHelpers::LAMB_CLASS_AWARE.call(_item)
                 end
               }
            else
                @firstName = _oa
            end
          end
        if !_o['lastName'].nil?
          _oa = _o['lastName']
            if(_oa.is_a? Hash)
              @lastName = EnunciateHelpers::LAMB_CLASS_AWARE.call(_oa) if _oa['@class']
              @lastName =  String.from_json(_oa) unless _oa['@class']
            elsif (_oa.is_a? Array)
              #an array(of hashes hopefully) or scalar
              @lastName = Array.new
              _oa.each { | _item | 
                 if ((_item.nil? || _item['@class'].nil?)rescue true)
                   @lastName.push String.from_json(_item)
                 else
                   @lastName.push EnunciateHelpers::LAMB_CLASS_AWARE.call(_item)
                 end
               }
            else
                @lastName = _oa
            end
          end
        if !_o['email'].nil?
          _oa = _o['email']
            if(_oa.is_a? Hash)
              @email = EnunciateHelpers::LAMB_CLASS_AWARE.call(_oa) if _oa['@class']
              @email =  String.from_json(_oa) unless _oa['@class']
            elsif (_oa.is_a? Array)
              #an array(of hashes hopefully) or scalar
              @email = Array.new
              _oa.each { | _item | 
                 if ((_item.nil? || _item['@class'].nil?)rescue true)
                   @email.push String.from_json(_item)
                 else
                   @email.push EnunciateHelpers::LAMB_CLASS_AWARE.call(_item)
                 end
               }
            else
                @email = _oa
            end
          end
        if !_o['gpa'].nil?
          _oa = _o['gpa']
            if(_oa.is_a? Hash)
              @gpa = EnunciateHelpers::LAMB_CLASS_AWARE.call(_oa) if _oa['@class']
              @gpa =  Float.from_json(_oa) unless _oa['@class']
            elsif (_oa.is_a? Array)
              #an array(of hashes hopefully) or scalar
              @gpa = Array.new
              _oa.each { | _item | 
                 if ((_item.nil? || _item['@class'].nil?)rescue true)
                   @gpa.push Float.from_json(_item)
                 else
                   @gpa.push EnunciateHelpers::LAMB_CLASS_AWARE.call(_item)
                 end
               }
            else
                @gpa = _oa
            end
          end
        if !_o['grades'].nil?
          _oa = _o['grades']
            if(_oa.is_a? Hash)
              @grades = EnunciateHelpers::LAMB_CLASS_AWARE.call(_oa) if _oa['@class']
              @grades =  Abogner::OtusChallenge::Rest::Student::Dto::ClassGradeDTO.from_json(_oa) unless _oa['@class']
            elsif (_oa.is_a? Array)
              #an array(of hashes hopefully) or scalar
              @grades = Array.new
              _oa.each { | _item | 
                 if ((_item.nil? || _item['@class'].nil?)rescue true)
                   @grades.push Abogner::OtusChallenge::Rest::Student::Dto::ClassGradeDTO.from_json(_item)
                 else
                   @grades.push EnunciateHelpers::LAMB_CLASS_AWARE.call(_item)
                 end
               }
            else
                @grades = _oa
            end
          end
    end

    # constructs a StudentDTO from a (parsed) JSON hash
    def self.from_json(o)
      if o.nil?
        return nil
      else
        inst = new
        inst.init_jaxb_json_hash o
        return inst
      end
    end
  end

end

end

end

end

end

module Abogner

module OtusChallenge

module Rest

module Student

module Dto

  # (no documentation provided)
  class StudentListDTO 

    # (no documentation provided)
    attr_accessor :students

    # the json hash for this StudentListDTO
    def to_jaxb_json_hash
      _h = {}
      if !students.nil?
        _ha = Array.new
        students.each { | _item | _ha.push _item.to_jaxb_json_hash }
        _h['students'] = _ha
      end
      return _h
    end

    # the json (string form) for this StudentListDTO
    def to_json
      to_jaxb_json_hash.to_json
    end

    #initializes this StudentListDTO with a json hash
    def init_jaxb_json_hash(_o)
        if !_o['students'].nil?
          _oa = _o['students']
            if(_oa.is_a? Hash)
              @students = EnunciateHelpers::LAMB_CLASS_AWARE.call(_oa) if _oa['@class']
              @students =  Abogner::OtusChallenge::Rest::Student::Dto::StudentDTO.from_json(_oa) unless _oa['@class']
            elsif (_oa.is_a? Array)
              #an array(of hashes hopefully) or scalar
              @students = Array.new
              _oa.each { | _item | 
                 if ((_item.nil? || _item['@class'].nil?)rescue true)
                   @students.push Abogner::OtusChallenge::Rest::Student::Dto::StudentDTO.from_json(_item)
                 else
                   @students.push EnunciateHelpers::LAMB_CLASS_AWARE.call(_item)
                 end
               }
            else
                @students = _oa
            end
          end
    end

    # constructs a StudentListDTO from a (parsed) JSON hash
    def self.from_json(o)
      if o.nil?
        return nil
      else
        inst = new
        inst.init_jaxb_json_hash o
        return inst
      end
    end
  end

end

end

end

end

end
