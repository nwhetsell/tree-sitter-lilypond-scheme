import XCTest
import SwiftTreeSitter
import TreeSitterLilypondScheme

final class TreeSitterLilypondSchemeTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_lilypond_scheme())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Lilypond Scheme grammar")
    }
}
