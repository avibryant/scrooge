{{^isNamedType}}{{fieldType}}{{/isNamedType}}{{#isNamedType}}{{#isImported}}{{fieldType}}{{/isImported}}{{^isImported}}{{#package}}{{package}}.{{/package}}{{fieldType}}{{/isImported}}{{/isNamedType}}
